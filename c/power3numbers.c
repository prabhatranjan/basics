//Find if a number is of power 3
#include<stdio.h>

int main(){
  int num,rem=0;

  printf("Enter a number\n");
  scanf("%d",&num);

  while(rem==0){
    rem=num%3;
    num=num/3;
    if(num==1){
      break;
    }
  }
  if(rem==0){
    printf("Yes! the number is a power of 3");
  }
  else
    printf("Oh no! the number is not a power of 3");

  return 0;
}
