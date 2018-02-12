//Find nth node from the end of a linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

void add(mynode *root, int value);
void print(mynode *root);
void findNode(mynode *root,int n);

int main(){
  mynode *root,*delnode;
  int i;

  //add first value
  root = (mynode *)malloc(sizeof(struct node));
  root->value = 0;
  root->next=(mynode *)0;

  //add other values
  for(i=1;i<10;i++){
    add(root,i);
  }

  printf("The original linked list is:\n");
  print(root);
  findNode(root, 7);
  return 0;
}

void add(mynode *root, int value){
  mynode *temp;
  temp = (mynode *)malloc(sizeof(struct node));
  temp->value=value;
  temp->next=(mynode *)0;

  while(root->next!=(mynode *)0){
    root = root->next;
  }
  root->next = temp;
}

void print(mynode *root){
  while(root->next!=(mynode *)0){
    printf("%d -> ",root->value);
    root=root->next;
  }
  printf("%d\n",root->value);
}

void findNode(mynode *root,int n){
  mynode *p,*q;
  int i;
  p=root;
  q=root;
  for(i=0;i<n;i++){
    q=q->next;
  }
  while(q!=(mynode *)0){
    p=p->next;
    q=q->next;
  }
  printf("%dth node from the end of this list is %d",n,p->value);
}
