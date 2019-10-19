#include <stdio.h>
void main(){
  char str1[100];
  gets(str1);
  int len, i, j, k, m1=0,m2=0,m3=0,p1,p2;
  len=strlen(str1);
  for(i=0;i<len;i++){
        m1=0;
    for(j=0;j<len;j++){
        if(str1[i]==str1[j]){
            m1++;
            k=i;
        }
    }
    if(m1>=m2){
        p1=m1;
    }else{
    p2=m2;
    }
      m2=m1;
  }
  if(p1>p2){
    printf("%d %c",p1,str1[k]);
  }else{
  printf("%d %c",p2, str1[k]);
  }
}
