//Reverse a doubly linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *prev;
  struct node *next;
}mynode;

void add(mynode *root, int value);
void print(mynode *root);
mynode* reverse(mynode *root);

int main(){
  mynode *root;
  int i;

  //add first value
  root = (mynode *)malloc(sizeof(struct node));
  root -> value = 0;
  root -> next = (mynode *)0;
  root -> prev = (mynode *)0;

  //add more values
  for(i=1;i<10;i++){
    add(root, i);
  }

  print(root);
  root = reverse(root);
  print(root);

  return 0;
}

void add(mynode *root, int value){
  mynode *temp;
  temp=(mynode *)malloc(sizeof(struct node));
  temp->value=value;
  temp->next=(mynode *)0;

  while(root->next!=(mynode *)0){
    root = root->next;
  }
  root->next = temp;
  temp->prev = root;
}

void print(mynode *root){
  while(root!=(mynode *)0){
    printf("<- %d -> ",root->value);
    root = root->next;
  }
  printf("\n");
}

mynode* reverse(mynode *root){
  mynode *temp;
  while(root->next!=(mynode *)0){
    temp=root->next;
    root->next=root->prev;
    root->prev=temp;
    root=temp;
  }
  root->next=root->prev;
  root->prev=(mynode *)0;
  return root;
}
