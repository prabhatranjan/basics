//Sort a singly linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

void add(mynode *root, int value);
void print(mynode *root);
void sort(mynode *root);

int main(){
  mynode *root,*delnode;
  int i;

  //add first value
  root = (mynode *)malloc(sizeof(struct node));
  root->value = 10;
  root->next=(mynode *)0;

  //add other values
  for(i=9;i>0;i--){
    add(root,i);
  }

  printf("The original linked list is:\n");
  print(root);

  sort(root);
  printf("The list after sorting in ascending order:\n");
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

void sort(mynode *root){
  mynode *p, *q;
  int temp;
  p=root;
  q=root->next;
  while(p->next!=(mynode*)0){
    while(q!=(mynode*)0){
      if(p->value > q->value){
        temp = p->value;
        p->value = q->value;
        q->value = temp;
      }
      q=q->next;
  }
  p=p->next;
  q=p->next;
  }
}
