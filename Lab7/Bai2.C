#include <stdio.h>
#include <string.h>

int main(){
    char userSys[] = "gh0sT"; 
    int passSys = 12345678; 
    char user[100]; 
    int pass; 
    printf("Moi ban dang nhap tai khoan: \n");

    printf("Nhap username: ");
    scanf("%s", user);

    printf("Nhap password: ");
    scanf("%d", &pass);
    if (strcmp(user, userSys) == 0 && pass == passSys) 
    {  
      printf("Dang nhap thanh cong");

    } else

    { 
      printf("Dang nhap that bai");
    }
  return 0;
}