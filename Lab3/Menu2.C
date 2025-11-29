#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bai1();
void bai2();
void bai3();
void bai4();

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
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
            case 4:
                bai4();
                break;
            case 0:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}

// ===============================
// BÀI 1: TÍNH HỌC LỰC
// ===============================
void bai1() {
    float dtb;
    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);
    if(dtb>=9){
        printf("Hoc luc Xuat sac");
    }else if(dtb>=8 && dtb<=9){
        printf("Hoc luc Gioi");
    }else if(dtb>=6.5 && dtb<=8){
        printf("Hoc luc Kha");
    }else if(dtb>=5 && dtb<=6.5){
        printf("Hoc luc Trung binh");
    }else
        printf("Hoc luc Yeu");
}

// ===============================
// BÀI 2: GIẢI PT BẬC 1
// ===============================
void bai2() {
    float a, b;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    if (a==0 && b==0){
        printf("Phuong trinh VSN");
    }else if (b!=0){
        printf("Phuong vo nghiem");
    }else
        printf("Phuong trinh co 1 nghiem: x=-b/a");
}

// ===============================
// BÀI 3: GIẢI PT BẬC 2
// ===============================
void bai3() {
    float a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Day khong phai PT bac 2\n");
        return;
    }

    float delta = b*b - 4*a*c;

    if (delta < 0) printf("PT vo nghiem\n");
    else if (delta == 0) printf("PT co nghiem kep: x = %.2f\n", -b/(2*a));
    else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("Nghiem 1: %.2f\n", x1);
        printf("Nghiem 2: %.2f\n", x2);
    }
}

// ===============================
// BÀI 4: TÍNH TIỀN ĐIỆN
// ===============================
void bai4() {
    int kwh, tien;
    printf("Nhap so dien: ");
    scanf("%d", &kwh);

    if (kwh <= 50) tien = kwh * 1500;
    else tien = 50*1500 + (kwh - 50)*2000;

    printf("Tien dien: %d VND\n", tien);
}
