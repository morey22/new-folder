#include <stdio.h>
#include <string.h>
int main(){
    char s1[15] = "Anuradha ";
    char s2[] = "Morey";
    strcat(s1, s2);
    printf("%s\n", s1);

    char str1[100], str2[100];
    strcpy(str1, "welcome to ");
    strcpy(str2, "our Academy");
    strcat(str1, str2);
    printf("%s", str1);
    return 0;

}