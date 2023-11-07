#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Anuradha Morey";
    int l = strlen(str);
    for(int i=0,k=l-1;i<=k;i++,k--){
        char temp = str[i];
        str[i] = str[k];
        str[k] = temp;
    }
    for(int i=0;i<l;i++){
       printf("%c", str[i]);
    }
    return 0;

}