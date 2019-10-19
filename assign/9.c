#include <stdio.h>
#include <string.h>
void main(){
  char str[100];
  int i, j, len=0;
  gets(str);
  for(j=0;str[j]!='\0';j++){
    len++;
  }
  for(i=0;i<len;i++){
    if(str[i]!=str[i+1]){
        if(str[i]!= str[i-1]){
            printf("%c",str[i]);
            break;
        }
    }
  }
}

