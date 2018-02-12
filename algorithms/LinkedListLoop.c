//Given only a link to a node, delete that node from a linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

void add(mynode *root, int value);
void print(mynode *root);
void detectloop(mynode *delnode);

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
  //no Loop
  detectloop(root);

  printf("\nNow adding a loop in the list\n");
  //add Loop
  mynode *a,*b;
  a=root;
  b=root->next->next;
  for(i=0;i<6;i++){
    a=a->next;
  }
  a->next = b;
  detectloop(root);

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

void detectloop(mynode *root){
  mynode *p,*q;
  int flag=1;
  p=root;
  q=root->next;
  while(q!=(mynode *)0 && p!=(mynode *)0){
    if(p==q){
      printf("Loop detected\n");
      flag=0;
      break;
    }
    else {
      p=p->next;
      q=(q->next)?q->next->next:q->next;
    }
  }
  if(flag)
    printf("No loop in this list\n");
}
