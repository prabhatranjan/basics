//Return a string from a function

#include<stdio.h>
#include<malloc.h>

char* func(){
  char *s;
  s=(char*)malloc(10*sizeof(char));
  printf("Enter a word\n");
  scanf("%s",s);
  return s;
}

int main(){
  char *str;
  str = func();
  printf("You entered, %s",str);
  return 0;
}
