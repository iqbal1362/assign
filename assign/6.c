#include <stdio.h>
void main(){
  char str[1000];
  int len, i;
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    if(str[i]==str[i+1]){
        printf("%c",str[i]);
        i++;
    }
  }
}

