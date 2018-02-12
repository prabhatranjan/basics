//Reverse a singly list list through recursion

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

void add(mynode *head, int value);
void print_list(mynode *head);
mynode* recursive_reverse(mynode *head);

int main(){
  mynode *head;
  int i;
  //add first value
  head = (mynode *)malloc(sizeof(struct node));
  head->value = 0;
  head->next = (mynode *)0;

  //add other values
  for(i=1;i<10;i++){
    add(head,i);
  }

  print_list(head);
  head = recursive_reverse(head);
  print_list(head);
  return 0;
}

void add(mynode *head,int value){
  mynode *temp;
  temp = (mynode *)malloc(sizeof(struct node));
  temp->next=(mynode *)0;
  temp->value=value;
  if(head==(mynode *)0){
    head = temp;
  }
  else {
    while(head->next!=(mynode *)0){
      head = head->next;
    }
    head->next=temp;
  }
}

void print_list(mynode *head){
  while(head->next!=(mynode *)0){
    printf("%d -> ",head->value);
    head=head->next;
  }
  printf("%d\n",head->value);
}

mynode* recursive_reverse(mynode *head){
  mynode *newhead;
  if(head->next==(mynode *)0){
    newhead = head;
    return newhead;
  }
  else {
    newhead = recursive_reverse(head->next);
    head->next->next = head;
    head->next=(mynode *)0;
    return newhead;
  }
}
