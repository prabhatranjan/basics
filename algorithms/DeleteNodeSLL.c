//Given only a link to a node, delete that node from a linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

void add(mynode *root, int value);
void print(mynode *root);
void delete(mynode *delnode);

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

  //pointer to node that has to be deleted
  delnode = root;
  for(i=0;i<5;i++){
    delnode = delnode->next;
  }

  delete(delnode);
  printf("The list after deleting a node:\n");
  print(root);

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

void delete(mynode *delnode){
  mynode *temp;
  temp = delnode->next;
  delnode->value = temp->value;
  delnode->next = temp->next;
}
