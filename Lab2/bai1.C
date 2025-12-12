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
    return 0;
}  