#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "collage";
    for(int i=0;i<8;i++){
        if(str[i]==str[0]){
            continue;
        }
        printf("%s", str[i]);
    }
    return 0;
}