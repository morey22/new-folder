#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    puts("Enter a string");
    scanf("%[^\n]s", str);
    puts("The size of is ! :");
    int size = 0;
    int i =0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d\n", size);
    int j=size-1;
    for(int i=0;i<=j;j--,i++){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(int i=0;i<size;i++){
        printf("%c", str[i]);
    }
    return 0;

}