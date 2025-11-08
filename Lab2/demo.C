#include <stdio.h>

int main(){
    float a, b, nhan, chia;
    printf("Nhap vao 2 so thuc: ");
    scanf("%f %f", &a, &b);
    printf("Xuat ra 2 so thuc: %f %f" ,a,b);
    nhan = a * b;
    chia = a/b;
    printf("Nhan 2 so thuc: %f", nhan);
    printf("Chia 2 so thuc: %f", chia);
    return 0;
}