function vo(j)

close all;
prefix = 'hw4/hw4';
if j<10
    [s, err]=sprintf('%s_000%d.dat', prefix, j);
elseif j<100
    [s, err]=sprintf('%s_00%d.dat', prefix, j);
else
    [s, err]=sprintf('%s_0%d.dat', prefix, j);
end

a = load(s);
k=144*3+1;
img1 = double(a(k:k+143, :)); 
z1 = a(1:144, :);   x1 = a(145:288, :);     y1 = a(289:144*3, :);
fw=1;
z1 = medfilt2(z1, [fw fw]);  x1 = medfilt2(x1, [fw fw]);      y1 = medfilt2(y1, [fw fw]); 

[m, n, v] = find (img1>65000);
imgt=img1;
num=size(m,1);
for kk=1:num
    imgt(m(kk), n(kk))=0;
end
imax=max(max(imgt));

for kk=1:num
    img1(m(kk),n(kk))=imax;
end

img1=sqrt(img1)*255/sqrt(max(max(img1))); 
img1=medfilt2(img1, [fw fw]);
f1 = figure(4); imagesc(img1); colormap(gray); title(['frame ', int2str(j)]);
[frm1, des1] = sift(img1, 'Verbosity', 1);  plotsiftframe(frm1);

j=j+3;
if j<10
    [s, err]=sprintf('%s_000%d.dat', prefix, j);
elseif j<100
    [s, err]=sprintf('%s_00%d.dat', prefix, j);
else
    [s, err]=sprintf('%s_0%d.dat', prefix, j);
end

b=load(s);
img2=double(b(k:k+143, :));
z2 = b(1:144, :);   x2 = b(145:288, :);     y2 = b(289:144*3, :);
z2 = medfilt2(z2, [fw fw]);  x2 = medfilt2(x2, [fw fw]);      y2 = medfilt2(y2, [fw fw]); 

imgt=img2;
num=size(m,1);
for kk=1:num
    imgt(m(kk), n(kk))=0;
end
imax=max(max(imgt));

for kk=1:num
    img2(m(kk),n(kk))=imax;
end

img2=sqrt(img2)*255/sqrt(max(max(img2))); 
img2=medfilt2(img2, [fw fw]);
f2=figure(5); imagesc(img2); colormap(gray); title(['frame ', int2str(j)]);
[frm2, des2] = sift(img2, 'Verbosity', 1); plotsiftframe(frm2);

match = siftmatch(des1, des2);

f3=figure(6);
plotmatches(img1,img2,frm1,frm2,match); title('Match of SIFT');

%find the matched two point sets.
%match = [4 6 21 18; 3 7 19 21];

pnum = size(match, 2)
if pnum<4
    fprintf('too few sift points for ransac.\n');
else
    rst = min(1000, nchoosek(pnum, 4));
    tmp_nmatch=zeros(2, pnum, rst);
    for i=1:rst
        [n_match, rs_match, cnum] = ransac(frm1, frm2, match, x1, y1, z1, x2, y2, z2);
        for k=1:cnum
            tmp_nmatch(:,k,i) = n_match(:,k);
        end
        tmp_rsmatch(:, :, i) = rs_match;      tmp_cnum(i) = cnum;
    end
    
    [rs_max, rs_ind] = max(tmp_cnum);
    
    op_num = tmp_cnum(rs_ind);
    if(op_num<3)
        fprintf('no consensus found, ransac fails.\n');
        return;
    end
    for k=1:op_num
        op_match(:, k) = tmp_nmatch(:, k, rs_ind);
    end
    
    f4=figure(7); plotmatches(img1,img2,frm1,frm2,tmp_rsmatch(:,:,rs_ind)); title('Feature points for RANSAC');
    f5=figure(8); plotmatches(img1,img2,frm1,frm2,op_match); title('Match after RANSAC');
end

for i=1:op_num
    frm1_index=op_match(1, i);      frm2_index=op_match(2, i);
    matched_pix1=frm1(:, frm1_index);     COL1=round(matched_pix1(1));     ROW1=round(matched_pix1(2));
    matched_pix2=frm2(:, frm2_index);     COL2=round(matched_pix2(1));     ROW2=round(matched_pix2(2));
    op_pset1(1,i)=-x1(ROW1, COL1);   op_pset1(2,i)=z1(ROW1, COL1);   op_pset1(3,i)=y1(ROW1, COL1);
    op_pset2(1,i)=-x2(ROW2, COL2);   op_pset2(2,i)=z2(ROW2, COL2);   op_pset2(3,i)=y2(ROW2, COL2);
end
[rot, trans, sta] = find_transform_matrix(op_pset1, op_pset2);
[phi, theta, psi] = rot_to_euler(rot); 
r2d=180.0/pi;
phi=phi*r2d
theta=theta*r2d
psi=psi*r2d
trans'
