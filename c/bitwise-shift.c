/* Bitwise shift operators
Left shift - Add 0s to the end in binary format
Right shift - Remove bits from the end in binary format
Problem: a) 389 * 2^7, b) 7653 / (2^5)
*/

#include<stdio.h>

int main(){
  int a = 389;
  int b = 7653;

  a = a << 7;
  b = b >> 5;

  printf("a=%d\nb=%d",a,b);

  return 0;
}
