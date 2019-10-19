#include <stdio.h>
#include <string.h>
void main(){
  char str1[100], str2[100], str3[100];
  int len1, len2, i, j;
  printf("Enter your first string: ");
  gets(str1);
  printf("Enter your second string: ");
  gets(str2);
  len1=strlen(str1);
  len2=strlen(str2);
  for(i=0;i<len1;i++){
    str3[i]=str1[i];
  }
  for(i=0;i<len2;i++){
    str1[i]=str2[i];
  }
  for(i=0;i<len1;i++){
    str2[i]=str3[i];
  }
  printf("***After swap***\n");
  printf("First string: ");
  for(i=0;i<len2;i++){
    printf("%c",str1[i]);
  }
  printf("\n");
  printf("First string: ");
  for(i=0;i<len1;i++){
    printf("%c",str2[i]);
  }
}
