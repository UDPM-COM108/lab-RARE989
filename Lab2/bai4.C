#include <stdio.h>
int main(){
    float toan, ly, hoa, dtb;
    printf("Nhap diem toan: ");
    scanf("%f", &toan); 
    printf("Nhap diem ly: ");
    scanf("%f", &ly); 
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    dtb = ( (toan * 3) + (ly *2) + hoa ) / 6;
    printf("Diem trung binh la: %f\n",dtb);
    return 0;
}