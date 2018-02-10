/*
Copy one string to another
*/
#include<stdio.h>
#include<string.h>

int main(){

  //Pointers
  char *a = "Pointer Hello";
  char *b;
  int i=0;

  while(*a!='\0'){
    *b = *a;
    b++;
    a++;
    i++;
  }
  *b = '\0';

  b = b-i;
  while(*b!='\0'){
    printf("%c",*b);
    b++;
  }

  //Arrays
  char s1[] = "Array Hello";
  char s2[12];
  strcpy(s2,s1);
  printf("\n%s",s2);

  return 0;

}
