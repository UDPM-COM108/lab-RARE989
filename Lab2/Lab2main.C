//Bai 1: Tinh cong, tru
#include <stdio.h>
int main(){
    float a, b, cong, tru;
    printf("\nNhap vao 2 so nguyen: ");
    scanf("%f %f", &a, &b);
    printf("Xuat ra 2 so nguyen: ");
    cong = a + b;
    tru = a - b;
    printf("Cong 2 so nguyen: %f\n", cong);
    printf("Tru 2 so nguyen: %f\n", tru);


//Bai 2: Tinh chu vi, dien tich HCN
    float cdai, crong, cvhcn, dthcn;
    printf("\nNhap cdai: ");
    scanf("%f", &cdai);
    printf("\nNhap crong: ");
    scanf("%f", &crong);
    cvhcn = (cdai + crong) * 2;
    dthcn = cdai * crong;
    printf("ChuviHCN la:%f\n", cvhcn);
    printf("DientichHCN la:%f\n", dthcn);


//Bai 3: Tinh chu vi, dien tich hinh tron
  #define PI 3.14
    float bkinh, cvht, dtht;
    printf("Nhap vao bkinh: ");
    scanf("%f", &bkinh);
    cvht = bkinh * 2 * PI;
    dtht = bkinh * bkinh * PI;
    printf("Chuvi HT:%f", cvht);
    printf("Dientich HT:%f", dtht);


//Bai 4: Tinh diem trung binh Toan, Ly, Hoa
    float toan, ly, hoa, dtb;
    printf("Nhap diem toan: ");
    scanf("%f", &toan); 
    printf("Nhap diem ly: ");
    scanf("%f", &ly); 
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    dtb = ( (toan * 3) + (ly *2) + hoa ) / 6;
    printf("Diem trung binh la: %f\n",dtb);


//Bai 5: Tinh chu vi, dien tich hinh tam giac vuong
    float cgv1, cgv2, chuyen, cvtg, dttg;
    printf("Nhap canh goc vuong 1: ");
    scanf("%f", &cgv1);
    printf("Nhap canh goc vuong 2: ");
    scanf("%f", &cgv2);
    printf("Nhap canh huyen: ");
    scanf("%f", &chuyen);
    cvtg = cgv1 + cgv2 + chuyen;
    dttg = 0.5 * cgv1 * cgv2;
    printf("Chu vi hinh tam giac la: %f\n", cvtg);
    printf("Dien tich hinh tam giac la: %f\n", dttg);
    return 0;
}    