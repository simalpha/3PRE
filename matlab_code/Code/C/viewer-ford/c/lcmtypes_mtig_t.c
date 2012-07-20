/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "lcmtypes_mtig_t.h"

static int __lcmtypes_mtig_t_hash_computed;
static int64_t __lcmtypes_mtig_t_hash;
 
int64_t __lcmtypes_mtig_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __lcmtypes_mtig_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__lcmtypes_mtig_t_get_hash };
    (void) cp;
 
    int64_t hash = 0xc41046b70d271165LL
         + __int64_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __lcmtypes_mtig_t_get_hash(void)
{
    if (!__lcmtypes_mtig_t_hash_computed) {
        __lcmtypes_mtig_t_hash = __lcmtypes_mtig_t_hash_recursive(NULL);
        __lcmtypes_mtig_t_hash_computed = 1;
    }
 
    return __lcmtypes_mtig_t_hash;
}
 
int __lcmtypes_mtig_t_encode_array(void *buf, int offset, int maxlen, const lcmtypes_mtig_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_unix), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_packet), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_rtc), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].status), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].sample_counter), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_roll), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_pitch), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_yaw), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_p), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_q), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_r), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_alt), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_e), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_d), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pressure), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pressureage), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_timeofweek), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_alt), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_e), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_d), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_horiz), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_vert), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_speed), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_dataage), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].publish_contains), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int lcmtypes_mtig_t_encode(void *buf, int offset, int maxlen, const lcmtypes_mtig_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lcmtypes_mtig_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __lcmtypes_mtig_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __lcmtypes_mtig_t_encoded_array_size(const lcmtypes_mtig_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __int64_t_encoded_array_size(&(p[element].ts_unix), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].ts_packet), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].ts_rtc), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].status), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].sample_counter), 1);
 
        size += __double_encoded_array_size(&(p[element].eul_roll), 1);
 
        size += __double_encoded_array_size(&(p[element].eul_pitch), 1);
 
        size += __double_encoded_array_size(&(p[element].eul_yaw), 1);
 
        size += __double_encoded_array_size(&(p[element].acc_x), 1);
 
        size += __double_encoded_array_size(&(p[element].acc_y), 1);
 
        size += __double_encoded_array_size(&(p[element].acc_z), 1);
 
        size += __double_encoded_array_size(&(p[element].gyr_p), 1);
 
        size += __double_encoded_array_size(&(p[element].gyr_q), 1);
 
        size += __double_encoded_array_size(&(p[element].gyr_r), 1);
 
        size += __double_encoded_array_size(&(p[element].mag_x), 1);
 
        size += __double_encoded_array_size(&(p[element].mag_y), 1);
 
        size += __double_encoded_array_size(&(p[element].mag_z), 1);
 
        size += __double_encoded_array_size(&(p[element].pos_lat), 1);
 
        size += __double_encoded_array_size(&(p[element].pos_lon), 1);
 
        size += __double_encoded_array_size(&(p[element].pos_alt), 1);
 
        size += __double_encoded_array_size(&(p[element].vel_n), 1);
 
        size += __double_encoded_array_size(&(p[element].vel_e), 1);
 
        size += __double_encoded_array_size(&(p[element].vel_d), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_pressure), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].rawgps_pressureage), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].rawgps_timeofweek), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_pos_lat), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_pos_lon), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_pos_alt), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_vel_n), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_vel_e), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_vel_d), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_accuracy_horiz), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_accuracy_vert), 1);
 
        size += __double_encoded_array_size(&(p[element].rawgps_accuracy_speed), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].rawgps_dataage), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].publish_contains), 1);
 
    }
    return size;
}
 
int lcmtypes_mtig_t_encoded_size(const lcmtypes_mtig_t *p)
{
    return 8 + __lcmtypes_mtig_t_encoded_array_size(p, 1);
}
 
int __lcmtypes_mtig_t_decode_array(const void *buf, int offset, int maxlen, lcmtypes_mtig_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_unix), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_packet), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ts_rtc), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].status), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].sample_counter), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_roll), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_pitch), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].eul_yaw), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].acc_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_p), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_q), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].gyr_r), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].mag_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].pos_alt), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_e), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].vel_d), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pressure), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pressureage), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_timeofweek), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_pos_alt), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_e), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_vel_d), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_horiz), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_vert), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_accuracy_speed), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rawgps_dataage), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].publish_contains), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __lcmtypes_mtig_t_decode_array_cleanup(lcmtypes_mtig_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_decode_array_cleanup(&(p[element].ts_unix), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].ts_packet), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].ts_rtc), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].status), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].sample_counter), 1);
 
        __double_decode_array_cleanup(&(p[element].eul_roll), 1);
 
        __double_decode_array_cleanup(&(p[element].eul_pitch), 1);
 
        __double_decode_array_cleanup(&(p[element].eul_yaw), 1);
 
        __double_decode_array_cleanup(&(p[element].acc_x), 1);
 
        __double_decode_array_cleanup(&(p[element].acc_y), 1);
 
        __double_decode_array_cleanup(&(p[element].acc_z), 1);
 
        __double_decode_array_cleanup(&(p[element].gyr_p), 1);
 
        __double_decode_array_cleanup(&(p[element].gyr_q), 1);
 
        __double_decode_array_cleanup(&(p[element].gyr_r), 1);
 
        __double_decode_array_cleanup(&(p[element].mag_x), 1);
 
        __double_decode_array_cleanup(&(p[element].mag_y), 1);
 
        __double_decode_array_cleanup(&(p[element].mag_z), 1);
 
        __double_decode_array_cleanup(&(p[element].pos_lat), 1);
 
        __double_decode_array_cleanup(&(p[element].pos_lon), 1);
 
        __double_decode_array_cleanup(&(p[element].pos_alt), 1);
 
        __double_decode_array_cleanup(&(p[element].vel_n), 1);
 
        __double_decode_array_cleanup(&(p[element].vel_e), 1);
 
        __double_decode_array_cleanup(&(p[element].vel_d), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_pressure), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].rawgps_pressureage), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].rawgps_timeofweek), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_pos_lat), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_pos_lon), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_pos_alt), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_vel_n), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_vel_e), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_vel_d), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_accuracy_horiz), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_accuracy_vert), 1);
 
        __double_decode_array_cleanup(&(p[element].rawgps_accuracy_speed), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].rawgps_dataage), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].publish_contains), 1);
 
    }
    return 0;
}
 
int lcmtypes_mtig_t_decode(const void *buf, int offset, int maxlen, lcmtypes_mtig_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lcmtypes_mtig_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __lcmtypes_mtig_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int lcmtypes_mtig_t_decode_cleanup(lcmtypes_mtig_t *p)
{
    return __lcmtypes_mtig_t_decode_array_cleanup(p, 1);
}
 
int __lcmtypes_mtig_t_clone_array(const lcmtypes_mtig_t *p, lcmtypes_mtig_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_clone_array(&(p[element].ts_unix), &(q[element].ts_unix), 1);
 
        __int64_t_clone_array(&(p[element].ts_packet), &(q[element].ts_packet), 1);
 
        __int64_t_clone_array(&(p[element].ts_rtc), &(q[element].ts_rtc), 1);
 
        __int16_t_clone_array(&(p[element].status), &(q[element].status), 1);
 
        __int16_t_clone_array(&(p[element].sample_counter), &(q[element].sample_counter), 1);
 
        __double_clone_array(&(p[element].eul_roll), &(q[element].eul_roll), 1);
 
        __double_clone_array(&(p[element].eul_pitch), &(q[element].eul_pitch), 1);
 
        __double_clone_array(&(p[element].eul_yaw), &(q[element].eul_yaw), 1);
 
        __double_clone_array(&(p[element].acc_x), &(q[element].acc_x), 1);
 
        __double_clone_array(&(p[element].acc_y), &(q[element].acc_y), 1);
 
        __double_clone_array(&(p[element].acc_z), &(q[element].acc_z), 1);
 
        __double_clone_array(&(p[element].gyr_p), &(q[element].gyr_p), 1);
 
        __double_clone_array(&(p[element].gyr_q), &(q[element].gyr_q), 1);
 
        __double_clone_array(&(p[element].gyr_r), &(q[element].gyr_r), 1);
 
        __double_clone_array(&(p[element].mag_x), &(q[element].mag_x), 1);
 
        __double_clone_array(&(p[element].mag_y), &(q[element].mag_y), 1);
 
        __double_clone_array(&(p[element].mag_z), &(q[element].mag_z), 1);
 
        __double_clone_array(&(p[element].pos_lat), &(q[element].pos_lat), 1);
 
        __double_clone_array(&(p[element].pos_lon), &(q[element].pos_lon), 1);
 
        __double_clone_array(&(p[element].pos_alt), &(q[element].pos_alt), 1);
 
        __double_clone_array(&(p[element].vel_n), &(q[element].vel_n), 1);
 
        __double_clone_array(&(p[element].vel_e), &(q[element].vel_e), 1);
 
        __double_clone_array(&(p[element].vel_d), &(q[element].vel_d), 1);
 
        __double_clone_array(&(p[element].rawgps_pressure), &(q[element].rawgps_pressure), 1);
 
        __int16_t_clone_array(&(p[element].rawgps_pressureage), &(q[element].rawgps_pressureage), 1);
 
        __int64_t_clone_array(&(p[element].rawgps_timeofweek), &(q[element].rawgps_timeofweek), 1);
 
        __double_clone_array(&(p[element].rawgps_pos_lat), &(q[element].rawgps_pos_lat), 1);
 
        __double_clone_array(&(p[element].rawgps_pos_lon), &(q[element].rawgps_pos_lon), 1);
 
        __double_clone_array(&(p[element].rawgps_pos_alt), &(q[element].rawgps_pos_alt), 1);
 
        __double_clone_array(&(p[element].rawgps_vel_n), &(q[element].rawgps_vel_n), 1);
 
        __double_clone_array(&(p[element].rawgps_vel_e), &(q[element].rawgps_vel_e), 1);
 
        __double_clone_array(&(p[element].rawgps_vel_d), &(q[element].rawgps_vel_d), 1);
 
        __double_clone_array(&(p[element].rawgps_accuracy_horiz), &(q[element].rawgps_accuracy_horiz), 1);
 
        __double_clone_array(&(p[element].rawgps_accuracy_vert), &(q[element].rawgps_accuracy_vert), 1);
 
        __double_clone_array(&(p[element].rawgps_accuracy_speed), &(q[element].rawgps_accuracy_speed), 1);
 
        __int16_t_clone_array(&(p[element].rawgps_dataage), &(q[element].rawgps_dataage), 1);
 
        __int8_t_clone_array(&(p[element].publish_contains), &(q[element].publish_contains), 1);
 
    }
    return 0;
}
 
lcmtypes_mtig_t *lcmtypes_mtig_t_copy(const lcmtypes_mtig_t *p)
{
    lcmtypes_mtig_t *q = (lcmtypes_mtig_t*) malloc(sizeof(lcmtypes_mtig_t));
    __lcmtypes_mtig_t_clone_array(p, q, 1);
    return q;
}
 
void lcmtypes_mtig_t_destroy(lcmtypes_mtig_t *p)
{
    __lcmtypes_mtig_t_decode_array_cleanup(p, 1);
    free(p);
}
 


