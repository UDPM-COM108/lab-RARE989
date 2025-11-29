///Bài 1:
#include <stdio.h>

int main() {
    int n, a[100];

    // Nhap so phan tu
    printf("Nhap n: ");
    scanf("%d", &n);

    // Nhap mang
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Tinh trung binh cac so chia het cho 3
    int sum = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            dem++;
        }
    }

    if (dem == 0)
        printf("Khong co so nao chia het cho 3 trong mang!\n");
    else
        printf("Trung binh cong cac so chia het cho 3 = %.2f\n", (float)sum / dem);




///Bài 2:
    int m, b[100];

    // Nhap so phan tu cua mang
    printf("Nhap n: ");
    scanf("%d", &m);

    // Nhap mang
    printf("Nhap %d phan tu:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Tim min va max
    int min = b[0];
    int max = b[0];

    for (int i = 1; i < m; i++) {
        if (b[i] < min) min = b[i];
        if (b[i] > max) max = b[i];
    }

    // Xuat ket qua
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);





///Bài 3
    int r, c[100];
    printf("Nhap n: ");
    scanf("%d", &r);

    for(int i = 0; i < r; i++){
        scanf("%d", &c[i]);
    }

    // Sắp xếp giảm dần
    for(int i = 0; i < r - 1; i++){
        for(int j = i + 1; j < r; j++){
            if(c[i] < c[j]){
                int tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }

    printf("Mang da sap xep giam dan:\n");
    for(int i = 0; i < r; i++){
        printf("%d ", c[i]);
    }

    return 0;
}