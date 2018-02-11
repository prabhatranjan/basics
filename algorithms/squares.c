//Find number of whole squares between two integers

#include<stdio.h>
void squares(int a,int b);
int isSquare(int a);

int main(){
  int x,y;
  printf("Enter two numbers\n");
  scanf("%d %d",&x,&y);
  squares(x,y);
  return 0;
}

void squares(int a, int b){
  int i,sq;
  for(i=a+1;i<b;i++){
    printf("Checking %d\n",i);
    sq=isSquare(i);
    if(sq==1){
      printf("Square found - %d\n",i);
      i=i+1;
    }
  }
}

int isSquare(int a){
  int i;
  for(i=(a/2);i>0;i--){
    if(a==(i*i)){
      return 1;
    }
    }
    return 0;
}
