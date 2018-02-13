//Find if two trees are identical
//Not working code, missing add method

#include<stdio.h>

typedef struct node{
  int val;
  struct node *left;
  struct node *right;
}mynode;

int compare(mynode *a, mynode *b);
void add(mynode *root); //missing implementation

int main(){
  mynode *a, *b;
  int c;
  //fill the trees
  add(a);
  add(b);

  c = compare(a,b);
  if(c==1){
    printf("Trees are identical");
  }
  else if(c==0){
    printf("Trees are different");
  }
  return 0;
}

int compare(mynode *a,mynode *b){
  if(a==(mynode *)0&&b==(mynode *)0){
    return 1;
  }
  else if(a==(mynode *)0||b==(mynode *)0){
    return 0;
  }
  else if(a->val == b->val&&compare(a->left,b->left)&&compare(a->right,b->right))){
    return 1;
  }
  else
  return 0;
}
