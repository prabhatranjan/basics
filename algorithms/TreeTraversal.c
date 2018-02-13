#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int val;
  struct node *left;
  struct node *right;
}mynode;

void add(mynode *root, int val);
void preorder(mynode *root);
void postorder(mynode *root);
void inorder(mynode *root);

int main(){
  mynode *root;
  int i;

  //add root value
  root = (mynode *)malloc(sizeof(struct node));
  root->val=10;
  root->left=root->right=(mynode *)0;

  //add other values
  for(i=1;i<20;i++){
    if(i!=10){
      add(root,i);
    }
  }

  printf("The preorder traversal of a BST:\n");
  preorder(root);
  printf("\nThe postorder traversal of a BST:\n");
  postorder(root);
  printf("\nThe inorder traversal of a BST:\n");
  inorder(root);

  return 0;
}

void add(mynode *root, int val){
  mynode *prev, *cur, *temp;
  temp=(mynode *)malloc(sizeof(struct node));
  temp->val = val;
  temp->left = temp->right = (mynode *)0;
  cur = root;
  while(cur){
    prev = cur;
    if(val<cur->val){
      cur = cur->left;
    }
    else{
      cur = cur->right;
    }
  }

  if(val<prev->val){
    prev->left = temp;
  }
  else{
    prev->right = temp;
  }
}

void preorder(mynode *root){
  if(root==(mynode *)0){
    return;
  }
  else {
    printf("%d ",root->val);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(mynode *root){
  if(root==(mynode *)0){
    return;
  }
  else {
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->val);
  }
}

void inorder(mynode *root){
  if(root==(mynode *)0){
    return;
  }
  else {
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
  }
}
