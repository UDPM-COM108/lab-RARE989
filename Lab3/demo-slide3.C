///Bai demo: Xay dung chuong trinh Dau/Rot
#include <stdio.h>
int main(){
    /*double diem;
    printf("Nhap diem cua ban: ");
    scanf("%lf", &diem);
    if(diem>=5){
        printf("Dau!!!");
    }else
        printf("Rot###");*/



///Bai 1: Xay dung chuong trinh tinh hoc luc
    /*double dtb;
    printf("Nhap dtb cua SV: ");
    scanf("%lf", &dtb);
    if(dtb>=9){
        printf("Hoc luc Xuat sac!!!");
    }else if(dtb>=8 && dtb<=9){
        printf("Hoc luc Gioi@@@");
    }else if(dtb>=6.5 && dtb<=8){
        printf("Hoc luc Kha$$$");
    }else if(dtb>=5 && dtb<=6.5){
        printf("Hoc luc Trung binh***");
    }else if(dtb)
        printf("Hoc luc Yeu~~~");*/




///Demo
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%s",&dapAn);
    switch(dapAn){
        case 'a': printf("Ban da chon sai\n");
        break;
        case 'b': printf("Ban da chon sai\n");
        break;
        case 'c': printf("Ban da chon dung\n");
        break;
        case 'd': printf("Ban da chon sai\n");
        break;
        default:
           printf("Ban chon khong dung bo dap an (a,b,c,d)");
    }
    return 0;
}


