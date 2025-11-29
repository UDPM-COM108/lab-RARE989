#include <stdio.h>
int main(){
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
 