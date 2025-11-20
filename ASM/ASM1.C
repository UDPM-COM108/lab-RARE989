#include <stdio.h>
#include <stdlib.h>

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
         case 1: printf("Kiem tra so nguyen\n"); 
            break;
         case 2: 
                printf("Tim UCLN & BCNN\n"); 
            break;
         case 3: 
                printf("Tinh tien Karaoke\n"); 
            break;
         case 4: 
                printf("Tinh tien dien\n"); 
            break;
         case 5: 
                printf("Doi tien\n"); 
            break;
         case 6: 
                printf("Tinh lai vay tra gop\n"); 
            break;
         case 7: 
                printf("Vay tien mua xe\n"); 
            break;
         case 8: 
                printf("Sap xep thong tin sinh vien\n"); 
            break;
         case 9: 
                printf("Game FPOLY-LOTT\n"); 
            break;
         case 10: 
                printf("Phep toan phan so\n"); 
            break;
         case 0: 
                printf("Thoat.\n"); 
            exit(0);
         default: 
                printf("Lua chon khong hop le.\n");
        }
    }while (luaChon != '0');
    return 0;
}
