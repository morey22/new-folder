#include <stdio.h>
#include <string.h>
int main(){
    char *s1[] = "collage wallah";
    char* s2;
    s2 = s1;
    printf("%s\n",s1);
    printf("%s", s2);
    return 0;
}