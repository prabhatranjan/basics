//Delete a node from a tree
//not working

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int val;
  struct node *left;
  struct node *right;
}mynode;

void add(mynode *root, int val);
void deleteNode(mynode *p);
void inorder(mynode *root);
mynode* inordersuccessor(mynode *p);

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

  //move down the tree
  mynode *p;
  p=root->left;
  int a;
  a=p->val;
  printf("Value to be deleted, %d\n",a);
  printf("Inorder traversal before delete:\n");
  inorder(root);
  deleteNode(p);
  printf("\nInorder traversal after delete:\n");
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

void deleteNode(mynode *p){
  mynode *pin;
  if(p==(mynode *)0){
    return;
  }
  else if(p->left==(mynode *)0&&p->right==(mynode *)0){
    p=(mynode *)0;
  }
  else if(p->left==(mynode *)0){
    p->val=p->right->val;
    p->right=(mynode *)0;
  }
  else if(p->right==(mynode *)0){
    p->val=p->left->val;
    p->left=(mynode *)0;
  }
  else {
    pin = inordersuccessor(p);
    p->val = pin->val;
    deleteNode(pin);
  }
}

mynode* inordersuccessor(mynode *p){
  mynode *pin;
  pin=p->right;
  while(pin->left!=(mynode *)p){
      pin=pin->left;
  }
  return pin;
}
