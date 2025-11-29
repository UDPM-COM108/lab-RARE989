//Bai 1: Tinh Min Max
#include <stdio.h>
#include <math.h>

int main(){
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhap min va max: ");
    scanf("%d %d", &min, &max);

    i = min; // Khởi tạo i = min
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    // Kiểm tra trường hợp không có số chẵn
    if (bienDem == 0) {
        printf("Khong co so chan trong khoang nay!\n");
    } else {
        trungBinh = tong / bienDem;
        printf("Ket qua: %.2f\n", trungBinh);
        }

//Bai 2: Kiem tra so nguyen
    int s, count = 0, a;

    printf("Nhap s: ");
    scanf("%d", &s);

    // Số nguyên tố là số > 1
    if (s <= 1) {
        printf("%d khong phai la so nguyen to.\n", s);
        return 0;
    }

    for (a = 2; i < s; a++) {
        if (s % a == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("%d la so nguyen to\n", s);
    } else {
        printf("%d khong phai la so nguyen to\n", s);
    }

//Bai 3: Tinh so chinh phuong
    int x;
    printf("Nhap mot so nguyen: ");
    if (scanf("%d", &x) != 1) return 1;

    if (a < 0) {
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