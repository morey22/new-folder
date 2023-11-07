#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = "Hello World";
    char *s2 = s1;
    s1[0] = 'M';
    printf("%s",s1);
    return 0;
}