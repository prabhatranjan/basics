//Extract a substring of length l starting at position p

#include<stdio.h>
#include<malloc.h>

char* substring(char *a,int l,int p);

int main(){
  char a[]="My main string";
  char *b;
  int l=4;
  int p=3;
  b = substring(a,l,p);
  printf("%s",b);
  return 0;
}

char* substring(char *a,int l,int p){
  char *b;
  b=(char *)malloc(l*sizeof(char));
  int i;

  for(i=0;i<l;i++){
    b[i]=a[p+i];
  }

  return b;
}
