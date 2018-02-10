#include<stdio.h>

//function pointer
int (*pfunc)();

//regular function
int func(){
  printf("Call successfull");
}

int main(){
  pfunc = func; //assign regular function to function pointer
  (*pfunc)(); //call function pointer
  return 0;
}
