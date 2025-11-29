#include <stdio.h>
int main(){
    float cdai, crong;
    printf("\nNhap cdai: ");
    scanf("%f", &cdai);
    printf("\nNhap crong: ");
    scanf("%f", &crong);
    float Chuvi = (cdai + crong) * 2;
    float Dientich = cdai * crong;
    printf("ChuviHCN la:%f\n", Chuvi);
    printf("DientichHCN la:%f\n", Dientich);
    return 0;
}