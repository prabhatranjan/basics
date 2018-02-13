//Print level order traversal of a tree

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int val;
  struct node *left;
  struct node *right;
}mynode;

void add(mynode *root, int val);
void levelorder(mynode *root);

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

  printf("The levelorder traversal of this tree:\n");
  levelorder(root);

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

void levelorder(mynode *root){
  mynode *queue[100] = {(mynode *)0};
  int i=0,size=0;

  while(root){
    printf("%d ",root->val);
    if(root->left){
      queue[size++] = root->left;
    }
    if(root->right){
      queue[size++] = root->right;
    }
    root = queue[i++];
  }
}
