#include <stdio.h>
#include <string.h>
void main(){
  char str[100], temp;
  int i, j, len;
  gets(str);
  len=strlen(str);
  for(i=0;str[i]!='\0';i++){
    while(str[i] == str[i+1]){

        for(j=i;j<len;j++){
            str[j]=str[j+1];
        }

    }
  }
  len=strlen(str);
  for(i=0;i<len;i++){
    printf("%c",str[i]);
  }
}

