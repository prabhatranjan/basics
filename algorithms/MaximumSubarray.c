/*
You are given a large array X of integers (both positive and negative)
and you need to find the maximum sum found in any contiguous subarray of X
*/

#include<stdio.h>

int main(){
  int a[]={11, -12, 15, -3, 8, -9, 1, 8, 10, -2};
  int i,j,sum,maxsum=0;
  int n = sizeof(a)/sizeof(int);
  for(i=0;i<n;i++){
      sum = a[i];
    for(j=i+1;j<n;j++){
      sum = sum+a[j];
      if(sum>maxsum){
        maxsum = sum;
      }
    }
  }
  printf("The maximum sum is %d\n",maxsum);
  return 0;
}
