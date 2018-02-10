//Given an array of 20 integers find the duplicated value

#include<stdio.h>

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,6,17,18,19};
  int i,j;
  //o(n^2)
  for(i=0;i<20;i++){
    for(j=i+1;j<20;j++){
      if(arr[i]==arr[j]){
        printf("Duplicate number %d found at positions %d and %d\n",arr[i],i+1,j+1);
        return 0;
      }
    }
  }
  printf("No duplicates available");
  return 0;
}
