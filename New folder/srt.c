#include <stdio.h>
int main(){
    char str[] = "Hello World";
    str[1] = 'b';
    int i = 0;
    while(str[i]!='\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}