#include <stdio.h>
#include <string.h>
void main(){
 char str[100], temp;
 int len, i, j;
 gets(str);
 len=strlen(str);
  for(i=0;i<len;i++){
    for(j=i;j<len;j++){
        if(str[i] > str[j]){
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
        }
    }
  }
  for(i=0;i<len;i++){
    printf("%c",str[i]);
  }
}

