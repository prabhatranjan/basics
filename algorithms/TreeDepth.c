//Find depth of a tree

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *left;
  struct node *right;
}mynode;

int height(mynode *root);
int max(int a, int b);

int main(){
  mynode *root, *l,*r,*l2;
  int h;
  //add few elements
  root = (mynode *)malloc(sizeof(struct node));
  l = (mynode *)malloc(sizeof(struct node));
  r = (mynode *)malloc(sizeof(struct node));
  l2 = (mynode *)malloc(sizeof(struct node));
  root->value=1;
  l->value=2;
  r->value=3;
  l2->value=5;
  root->left = l;
  root->right = r;
  r->left = l2;
  l->left = (mynode *)0;
  l->right = (mynode *)0;
  r->right = (mynode *)0;
  l2->left = (mynode *)0;
  l2->right = (mynode *)0;

  h = height(root);
  printf("Height of the tree is %d\n",h);
  return 0;
}

int height(mynode *root){
  printf("%d\n",root->value);
  int h1,h2;
  if(root==(mynode *)0){
    return 0;
  }
  if(root->left){
    h1 = height(root->left);
  }
  if(root->right){
    h2 = height(root->right);
  }
  return (max(h1,h2)+1);
}

int max(int a, int b){
  if(a>=b){
    return a;
  }
  else
  return b;
}
