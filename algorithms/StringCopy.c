//Copy one string to another

#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main(){
  char *a, *b;
  int i=0;

  printf("Enter a word\n");
  scanf("%s",a);

  b = (char *)malloc(strlen(a)*sizeof(char));

  while(a[i]!='\0'){
    b[i]=a[i];
    i=i+1;
  }

  printf("Copied word is: %s\n",b);

  return 0;
}
