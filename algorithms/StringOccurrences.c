//Find count of occurrences of a string within another string

#include<stdio.h>
#include<string.h>

int findString(char *a,char*b);

int main(){
  char *a="HellHelloHeloHelloooHe";
  char *b="Hello";
  int n;
  n = findString(a,b);
  printf("Total number of occurrences is: %d",n);
  return 0;
}

int findString(char *a, char *b){
  int sa,sb,i,j,n;
  sa=strlen(a);
  sb=strlen(b);
  n=0;

  printf("Main string: %s\nSize: %d\nSub String: %s\nSize: %d\n",a,sa,b,sb);

  for(i=0;i<(sa-sb);i++){
    for(j=0;j<sb;j++){
      if(a[i+j]!=b[j]){
        break;
      }
      if(j==sb-1){
        n=n+1;
        printf("Match found at %d\n",i);
      }
    }
  }
return n;

}
