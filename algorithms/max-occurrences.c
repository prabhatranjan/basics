/*
An array of integers is given. Two integers x and y have multiple occurrences in the array.
Find longest sub-array within the array where the occurence of x and y are equal.
*/

#include<stdio.h>

int find(int x,int y,int *a);

int main(){
  int arr[]={2,3,4,2,5,3,6,2};
  int p,i;
  p=find(2,3,arr);
  for(i=0;i<p;i++){
    printf("%d ",arr[i]);
  }
  printf("\n p = %d",p);
  return 0;
}

int find(int x, int y, int *a){
  int i,p=0,cx=0,cy=0;
  while(*a!='\0'){
    if(*a==x){
      cx=cx+1;
    }
    else if(*a==y){
      cy=cy+1;
    }
    if(cx==cy){
      p=i;
    }
    a++;
  }
  if(p==0){
    p=-1;
  }
  return p;
}
