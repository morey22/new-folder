#include<stdio.h>
#include<string.h>
int main(){
  int n;
  scanf("%d", &n);
  char str[10];
  scanf("%s",str);
  n = strlen(str);
  if(strlen(str)<n){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}