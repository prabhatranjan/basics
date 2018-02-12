//Reverse a string

#include<stdio.h>

void reverse(char *s);

int main(){
  char *a="Malaylam";
  reverse(a);
  return 0;
}

void reverse(char *s){
  if(*s=='\0'){
    return;
  }
  reverse(s+1);
  printf("%c",*s);
}
