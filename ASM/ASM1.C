#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


struct SinhVien {
    char HOTEN[50];
    double diem;
    char hocLuc[20];
};

void xepHocLuc(struct SinhVien *sv) {
    if (sv->diem < 5)
        strcpy(sv->hocLuc, "Yeu");
    else if (sv->diem < 7)
        strcpy(sv->hocLuc, "Trung binh");
    else if (sv->diem < 8)
        strcpy(sv->hocLuc, "Kha");
    else
        strcpy(sv->hocLuc, "Gioi");
}


int main(){
    int luaChon;
    do{
        printf("\n=== WELCOME TO MY ASSIGNMENT COM108 - PS49445 ===\n");
        printf("\n================== MENU ==================\n");
        printf("1. Chuong trinh kiem tra so nguyen\n");
        printf("2. Chuong trinh tim UCLN & BCNN cua 2 so\n");
        printf("3. Chuong trinh tinh tien Karaoke\n");
        printf("4. Chuong trinh tinh tien dien\n");
        printf("5. Chuong trinh quy doi tien \n");
        printf("6. Chuong trinh tinh lai vay tra gop 12 thang\n");
        printf("7. Chuong trinh vay tien mua xe \n");
        printf("8. Chuong trinh sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Chuong trinh phep toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        if(scanf("%d", &luaChon) != 1){
            printf("Nhap sai. Thoat.\n"); 
            break;
        }
        switch(luaChon){
         case 1: {
            int x;
            printf("Nhap x: ");
            scanf("%d", &x);

    // 1. Kiểm tra x có phải số nguyên?
            printf("%d la so nguyen.\n", x);

    // 2. Kiểm tra số nguyên tố
            int nguyento = 1; 

            if (x < 2) {
            nguyento = 0;
            } else {
               for (int i = 2; i * i <= x; i++) {
               if (x % i == 0) {
                nguyento = 0;
                break;
            }
        }
    }

             if (nguyento == 1)
            printf("%d la so nguyen to.\n", x);
             else
            printf("%d KHONG phai so nguyen to.\n", x);

    // 3. Kiểm tra số chính phương
            int k = (int)sqrt(x);
            if (k * k == x)
               printf("%d la so chinh phuong.\n", x);
            else
               printf("%d KHONG phai so chinh phuong.\n", x);
         }
            break;
         case 2: {
            int x, y;
            printf("Nhap x va y: ");
            scanf("%d %d", &x, &y);

    // Tính UCLN 
            int a = x, b = y;
            while (b != 0) {
                int r = a % b;
                    a = b;
                    b = r;
            }
            int UCLN = a;

    // Tính BCNN
            int BCNN = (x * y) / UCLN;

            printf("UCLN của %d và %d = %d\n", x, y, UCLN);
            printf("BCNN của %d và %d = %d\n", x, y, BCNN);
         }
            break;
         case 3: {
            int gioVao, phutVao, gioRa, phutRa;
            printf("Nhap gio vao (gio phut): ");
            scanf("%d %d", &gioVao, &phutVao);
            printf("Nhap gio ra (gio phut): ");
            scanf("%d %d", &gioRa, &phutRa);

    // Kiểm tra hợp lệ
            if (gioVao < 12 || gioRa > 23 || gioRa < gioVao) {
               printf("Gio khong hop le!\n");
            break;
         }

    // Tính số phút vào và ra
            int vao = gioVao * 60 + phutVao;
            int ra  = gioRa * 60 + phutRa;
            int soPhut = ra - vao;

            if (soPhut <= 0) {
               printf("Thoi gian khong hop le!\n");
            break;
         }

    // Quy đổi thành giờ dạng float
            float soGio = soPhut / 60.0;

            float tien = 0;

    // 3 giờ đầu = 150000 (tương đương 50000/giờ)
            if (soGio <= 3) {
               tien = soGio * (150000.0 / 3.0);  
           } else {
               tien = 150000; // 3 giờ đầu
               float gioThem = soGio - 3;// giảm 30%
         }

    // Giảm thêm 10% nếu vào từ 14h → 17h
            if (gioVao >= 14 && gioVao <= 17) {
               tien *= 0.9;
         }

            printf("Tong tien can thanh toan: %.0f VND\n", tien);
         }
            break;
         case 4: {
            int soDien;
            float tongTien = 0.0;
            int kWhConLai;
            printf("Nhap so dien su dung: ");
            scanf("%d", &soDien);
            kWhConLai = soDien;

    // Bậc 6: Từ 401 kWh trở lên (Giá: 2.927 đồng/kWh)
            if (kWhConLai > 400) {
        // Số kWh ở bậc 6 = kWhConLai - 400
            tongTien += (kWhConLai - 400) * 2927.0; // Lưu ý: 2.927 * 1000 = 2927 đồng
            kWhConLai = 400; // Số còn lại sau khi tính bậc 6
         }

    // Bậc 5: Từ 301 - 400 kWh (Khoảng: 100 kWh) (Giá: 2.834 đồng/kWh)
            if (kWhConLai > 300) {
        // Số kWh ở bậc 5 = kWhConLai - 300 (hoặc 400 - 301 + 1 = 100)
            tongTien += (kWhConLai - 300) * 2834.0;
            kWhConLai = 300;
         }

    // Bậc 4: Từ 201 - 300 kWh (Khoảng: 100 kWh) (Giá: 2.536 đồng/kWh)
            if (kWhConLai > 200) {
        // Số kWh ở bậc 4 = kWhConLai - 200
            tongTien += (kWhConLai - 200) * 2536.0;
            kWhConLai = 200;
         }

    // Bậc 3: Từ 101 - 200 kWh (Khoảng: 100 kWh) (Giá: 2.014 đồng/kWh)
            if (kWhConLai > 100) {
        // Số kWh ở bậc 3 = kWhConLai - 100
            tongTien += (kWhConLai - 100) * 2014.0;
            kWhConLai = 100;
         }

    // Bậc 2: Từ 51 - 100 kWh (Khoảng: 50 kWh) (Giá: 1.734 đồng/kWh)
            if (kWhConLai > 50) {
        // Số kWh ở bậc 2 = kWhConLai - 50
            tongTien += (kWhConLai - 50) * 1734.0;
            kWhConLai = 50;
         }

    // Bậc 1: Từ 0 - 50 kWh (Khoảng: 50 kWh) (Giá: 1.678 đồng/kWh)
    // Nếu kWhConLai > 0 (tức là số kWh ban đầu > 0)
            if (kWhConLai > 0) {
        // Số kWh ở bậc 1 = kWhConLai (tối đa 50)
            tongTien += kWhConLai * 1678.0;
         }

            printf("So kWh da su dung: %d kWh\n", soDien);
    // Chia cho 1000 để chuyển từ 'đồng' (như trong bảng, ví dụ 1.678) về đơn vị 'đồng' thực tế
            printf("Tong so tien phai tra: %.0f dong\n", tongTien);
         }
            break;
         case 5: {
            int menGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            int soTien;
            printf("Nhap so tien can doi: ");
            scanf("%d", &soTien);

            for (int i = 0; i < 9; i++){
               int count = soTien / menGia[i];
               if (count > 0){
                  printf("%d to %d\n", count, menGia[i]);
               }
            }
         }
            break;
         case 6: {
            long long soTienVay;
            printf("Nhap so tien vay: ");
            scanf("%lld", &soTienVay);

            long long gocThang = soTienVay / 12;
            long long conLai = soTienVay;

            printf("\nKy | So tien goc | Lai | Tong tien tra | Con lai\n");

            for (int i = 1; i < 12; i++){
               long long lai = conLai * 0.05;
               long long tongTienTra = gocThang + lai;
               conLai -= gocThang;

               printf("%2d | %lld | %lld | %lld | %lld\n", i, gocThang, lai, tongTienTra, conLai);
            }
         }
            break;
         
         case 7: {
            int n;
            printf("Nhap so luong SV: ");
            scanf("%d", &n);

            struct SinhVien sv[n];
            getchar();

            for (int i = 0; i < n; i++){
               printf("Nhap ho va ten: ");
               fgets(sv[i].HOTEN, 50, stdin);
               sv[i].HOTEN[strcspn(sv[i].HOTEN, "\n")] = '\0';

               printf("Nhap diem so: ");
               scanf("%lf", &sv[i].diem);
               getchar();

               xepHocLuc(&sv[i]);
            }
            for (int i = 0; i < n - 1; i++){
               for (int j = i + 1; j < n; j++){
                  if (sv[i].diem < sv[j].diem){
                     struct SinhVien temp = sv[i];
                     sv[i] = sv[j];
                     sv[j] = temp;
                  }
               }
            }
            printf("Danh sach sau khi sap xep: \n");
            for (int i = 0; i < n; i++){
               printf("%s - %.2lf- %s\n", sv[i].HOTEN, sv[i].diem, sv[i].hocLuc);
            }
         }

            break;
         case 8: {
            float a, b, c, d;
            printf("Nhap phan so 1 (a b): ");
            scanf("%f %f", &a, &b);

            printf("Nhap phan so 2 (c d): ");
            scanf("%f %f", &c, &d);

            printf("Tong = %.2f\n", a/b + c/d);
            printf("Hieu = %.2f\n", a/b - c/d);
            printf("Tich = %.2f\n", (a/b) * (c/d));
            printf("Thuong = %.2f", (a/b) / (c/d));
         }
            break;
         case 9: {}
            break;
         case 10: {}
            break;
         case 0: printf("Thoat.\n");
            exit(0);
         default: printf("Lua chon khong hop le.\n");
        }
    }while (luaChon != '0');
    return 0;
}
