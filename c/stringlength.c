/*
Find length of a string with strlen() and without it.
*/

#include<stdio.h>
#include<string.h>

int main(){
  char str[] = "Find my length";
  int a=0,b=0;

  a = strlen(str);

  while(str[b]!='\0'){
    b++;
  }

  printf("%d %d",a,b);

  return 0;
}
