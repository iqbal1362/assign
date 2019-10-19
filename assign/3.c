#include <stdio.h>
#include <string.h>
void main(){
  char str[100];
  int len, i, j, flag=0;
  printf("Enter your string: ");
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    if(str[i] != str[len-i-1]){
        flag=1;
    }
  }
  if(flag == 0){
    printf("String is pallindrom!");
  }else{
    printf("String is not pallindrom!");
  }
}

