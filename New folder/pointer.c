#include<stdio.h>
int main(){
    char str[] = "Hello world";
    char* ptr = str;
    printf("%p", &str[0]);
    return 0;
}