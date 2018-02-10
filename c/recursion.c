//find factorial of a number using recursion
#include<stdio.h>

long int rec(int a);

int main(){
  int i;
  long int fact;

  printf("Enter a number less than 15\n");
  scanf("%d",&i);

  fact = rec(i);
  printf("Factorial of %d is %ld",i,fact);

  return 0;
}

long int rec(int a){
  if(a==1){
    return 1;
  }
  else{
    return a*rec(a-1);
  }
}
