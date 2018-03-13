/*
Design a url shortner
Lets assume all long URLs are in a database and have a id associated with it.
I have written a function that takes the id as input and returns a short url containing characters:
a-z,A-Z,0-9
*/

#include<stdio.h>

void shorten(int id);

int main(){
  int id;
  id=281284;
  shorten(id);
  return 0;
}

void shorten(int id){
  char base[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  char sh[6];
  int i=0;
  while(id){
    sh[i]=base[id%62];
    id=id/62;
    i=i+1;
  }
  printf("%s",sh);
}
