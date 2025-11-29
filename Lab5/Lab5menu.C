#include <stdio.h>

// ===== HÀM TÌM MAX & MIN =====
int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int timMin(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

// ===== HÀM KIỂM TRA NĂM NHUẬN =====
int laNameNhuan(int nam) {
    if (nam % 400 == 0) {
        return 1;
    }
    if (nam % 100 == 0) {
        return 0;
    }
    if (nam % 4 == 0) {
        return 1;
    }
    return 0;
}

// ===== HÀM BÀI 1: TÌM MAX & MIN =====
void bai1() {
    int so1, so2, so3;
    
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &so1, &so2, &so3);
    
    int max = timMax(so1, so2, so3);
    int min = timMin(so1, so2, so3);
    
    printf("Ba so da nhap: %d, %d, %d\n", so1, so2, so3);
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

// ===== HÀM BÀI 2: KIỂM TRA NĂM NHUẬN =====
void bai2() {
    int nam;
    
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    
    if (nam < 1) {
        printf("Nam khong hop le.\n");
        return;
    }
    
    if (laNameNhuan(nam)) {
        printf("Nam %d LA nam nhuan.\n", nam);
    } else {
        printf("Nam %d KHONG PHAI la nam nhuan.\n", nam);
    }
}

// ===== HÀM BÀI 3: KIỂM TRA CHIA HẾT CHO 5 VÀ 9 =====
void bai3() {
    int n;
    
    printf("Nhap vao so bat ki trong khoang [1, 1000]: ");
    scanf("%d", &n);
    
    if (n < 1 || n > 1000) {
        printf("So khong nam trong khoang [1, 1000].\n");
        return;
    }
    
    int chia5 = (n % 5 == 0) ? 1 : 0;
    int chia9 = (n % 9 == 0) ? 1 : 0;
    
    printf("So %d:\n", n);
    printf("- Chia het cho 5: %s\n", chia5 ? "Co" : "Khong");
    printf("- Chia het cho 9: %s\n", chia9 ? "Co" : "Khong");
    printf("- Khong chia het cho ca 5 va 9: %s\n", (!chia5 && !chia9) ? "Co" : "Khong");
}

// ===== HÀM MAIN VỚI MENU =====
int main() {
    int choice;
    
    do {
        printf("\n");
        printf("======= CHUONG TRINH MENU - LAB 5 ======\n");
        printf("1. Tim gia tri lon nhat va nho nhat\n");
        printf("2. Kiem tra nam nhuan \n");
        printf("3. Kiem tra chia het cho 5 va 9\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang (0-3): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 0:
                printf("\nThoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 0);
    
    return 0;
}