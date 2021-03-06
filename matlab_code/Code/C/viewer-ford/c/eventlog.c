#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <arpa/inet.h>
#include "eventlog.h"

#define MAGIC ((int32_t) 0xEDA1DA01L)

static inline int fread32(FILE *f, int32_t *v32)
{
    int32_t v;
    if (fread(&v, 4, 1, f) != 1)
        return -1;
    *v32 = ntohl(v);
    return 0;
}

static inline int fread64(FILE *f, int64_t *v64)
{
    int32_t v1, v2;
    if (fread32(f, &v1))
        return -1;
    if (fread32(f, &v2))
        return -1;
    *v64 =     (((int64_t) v1)<<32) | (((int64_t) v2)&0xffffffff);
    return 0;
}

lcm_eventlog_t *lcm_eventlog_create(const char *path, const char *mode)
{
    if(strcmp(mode, "r")) return NULL;
    lcm_eventlog_t *l = (lcm_eventlog_t*) calloc(1, sizeof(lcm_eventlog_t));
    l->f = fopen(path, mode);
    if (l->f == NULL) {
        free (l);
        return NULL;
    }
    l->eventcount = 0;
    return l;
}

void lcm_eventlog_destroy(lcm_eventlog_t *l)
{
    fclose(l->f);
    free(l);
}

lcm_eventlog_event_t *lcm_eventlog_read_next_event(lcm_eventlog_t *l)
{
    lcm_eventlog_event_t *le = 
        (lcm_eventlog_event_t*) calloc(1, sizeof(lcm_eventlog_event_t));
    
    int32_t magic = 0;

    do {
        int r = fgetc(l->f);
        if (r < 0) goto eof;
        magic = (magic << 8) | r;
    } while( magic != MAGIC );

    fread64(l->f, &le->eventnum);
    fread64(l->f, &le->timestamp);
    fread32(l->f, &le->channellen);
    fread32(l->f, &le->datalen);

    if (l->eventcount != le->eventnum) {
        l->eventcount = le->eventnum;
    }

    le->channel = calloc(1, le->channellen+1);
    if (fread(le->channel, 1, le->channellen, l->f) != (size_t) le->channellen)
        goto eof;

    le->data = calloc(1, le->datalen+1);
    if (fread(le->data, 1, le->datalen, l->f) != (size_t) le->datalen)
        goto eof;
    
    l->eventcount++;

    return le;

eof:
    return NULL;
}

void lcm_eventlog_free_event(lcm_eventlog_event_t *le)
{
    if (le->data) free(le->data);
    if (le->channel) free(le->channel);
    memset(le,0,sizeof(lcm_eventlog_event_t));
    free(le);
}

static int64_t get_event_time(lcm_eventlog_t *l)
{
    int32_t magic = 0;
    int r;

    do {
        r = fgetc(l->f);
        if (r < 0) goto eof;
        magic = (magic << 8) | r;
    } while( magic != MAGIC );

    int64_t event_num;
    int64_t timestamp;
    if (0 != fread64(l->f, &event_num)) return -1;
    if (0 != fread64(l->f, &timestamp)) return -1;
    fseeko (l->f, -20, SEEK_CUR);

    l->eventcount = event_num;

    return timestamp;

eof:
    return -1;
}

int lcm_eventlog_seek_to_timestamp(lcm_eventlog_t *l, int64_t timestamp)
{
    fseeko (l->f, 0, SEEK_END);
    off_t file_len = ftello(l->f);

    int64_t cur_time;
    double frac1 = 0;               // left bracket
    double frac2 = 1;               // right bracket
    double prev_frac = -1;
    double frac;                    // current position

    while (1) {
        frac = 0.5*(frac1+frac2);
        off_t offset = (off_t)(frac*file_len);
        fseeko (l->f, offset, SEEK_SET);
        cur_time = get_event_time (l);
        if (cur_time < 0)
            return -1;

        frac = (double)ftello (l->f)/file_len;
        if ((frac > frac2) || (frac < frac1) || (frac1>=frac2))
            break;
    
        double df = frac-prev_frac;
        if (df < 0)
            df = -df;
        if (df < 1e-12)
            break;

        if (cur_time == timestamp)
            break;

        if (cur_time < timestamp)
            frac1 = frac;
        else
            frac2 = frac;

        prev_frac = frac;
    }

    return 0;
}
