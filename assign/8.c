#include <stdio.h>
#include <string.h>
void main(){
  char str[100];
  int i, j, len=0, div, n, p=0, k, x, y, z;
  printf("Enter your string:");
  gets(str);
  printf("Enter the value for n:");
  scanf("%d",&n);
  for(k=0;str[k]!='\0';k++){
    len++;
  }
  div=len/n;
  x=div;
  for(i=0, k=0;k<n;i=i+div, k++){
        p=i;
    for(j=p;j<p+div;j++){
        printf("%c",str[j]);
    }
    printf("\n");
  }
}

