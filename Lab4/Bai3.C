#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Nhap mot so nguyen: ");
    if (scanf("%d", &x) != 1) return 1;

    if (x < 0) {
        printf("%d khong phai la so chinh phuong\n", x);
        return 0;
    }

    int r = (int)sqrt((double)x);
    if (r * r == x)
        printf("%d la so chinh phuong (can = %d)\n", x, r);
    else
        printf("%d khong phai la so chinh phuong\n", x);

    return 0;
}