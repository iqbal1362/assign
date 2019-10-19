#include <stdio.h>
#include <string.h>
void reverse(){
  char ch;
  scanf("%c",&ch);
  if(ch!='\n'){
    reverse();
    printf("%c", ch);
  }
}
void main(){
  reverse();
}

