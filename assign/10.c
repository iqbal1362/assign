#include <stdio.h>
#include <string.h>
void main(){
  char str[100];
  int i=0, j, len=0, p;
  gets(str);

  for(j=0;str[j]!='\0';j++){
    len++;
  }
  strcat(str, " ");
  len--;
  while(str[len]!='\0'){
    if(str[len]==' '){
        i=len;
        i++;
        while(str[i]!=' '){
            printf("%c",str[i]);
            i++;
        }
        printf(" ");
    }
    len--;
  }
  i=0;
  while(str[i]!=' '){
            printf("%c",str[i]);
            i++;
        }
}

