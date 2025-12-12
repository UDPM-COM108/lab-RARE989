#include <stdio.h>
#include <string.h>

int main(){
    char s[100]; 
    printf("Xin moi nhap vao chuoi: "); 
    gets(s); 
    int i = 0; 
    int n = 0; //nguyen am        
    int p = 0; //phu am       
    while(s[i++] != '\0') { 
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        n++;
    }else{
        p++;
    }
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p); 
    return 0;
}