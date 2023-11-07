#include <stdio.h>
#include <string.h>
int main(){
    char s1[12] = "Anuradha";
    char s2[12];
    strcpy(s2,s1);
    s2[0] = 'a';
    printf("%s", s2);
    return 0;
}