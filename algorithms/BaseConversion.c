//Convert from base 10 to other base
#include<stdio.h>

void convert(int n,int b);

int main(){
  int i,base;
  printf("Enter a number\n");
  scanf("%d",&i);
  printf("Enter the target base\n");
  scanf("%d",&base);
  convert(i,base);
  return 0;
}

void convert(int n,int b){
  char str[]="0123456789abcdefghijklmnopqrstuvwxyz";
  char target[100];
  int i=0,j=0;

  printf("\n%d in base %d is:\n",n,b);
  while(n){
    target[i]=str[n%b];
    n=n/b;
    i++;
  }

  for(j=0;j<(i+1);j++){
    printf("%c",target[j]);
  }
}
