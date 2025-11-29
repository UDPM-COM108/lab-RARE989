#include <stdio.h>
#define PI 3.14
int main(){
    float bkinh;
    printf("Nhap vao bkinh: ");
    scanf("%f", &bkinh);
    float Chuvi = bkinh * 2 * PI;
    float Dientich = bkinh * bkinh * PI;
    printf("Chuvi HT:%f", Chuvi);
    printf("Dientich HT:%f", Dientich);
    return 0;
}    