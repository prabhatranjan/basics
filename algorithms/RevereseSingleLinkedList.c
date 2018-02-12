// Reverese a single linked list

#include<stdio.h>
#include<malloc.h>

typedef struct node{
  int value;
  struct node *next;
}mynode;

mynode *head,*tail,*temp,*temp1,*temp2;

void add(int value);
void reverse();
void print_list();

int main(){
  head = (mynode *)0;
  int i;
  //insert values to linked list
  for(i=0;i<10;i++){
    add(i);
  }
  printf("Current list:\n");
  print_list();
  reverse();
  printf("Reveresed list:\n");
  print_list();
}

void add(int value){
  temp = (mynode *)malloc(sizeof(struct node));
  temp->next = (mynode *)0;
  temp->value = value;
  if(head == (mynode *)0){
    head = temp;
    tail = temp;
  }
  else {
    tail->next = temp;
    tail = temp;
  }
}

void print_list(){
  temp = head;
  while(temp->next!=(mynode *)0){
    printf("%d -> ",temp->value);
    temp = temp->next;
  }
  printf("%d\n",temp->value);
}

void reverse(){
  temp=head->next;
  temp1=temp->next;
  temp->next=head;
  head->next=(mynode *)0;
  while(temp1!=(mynode *)0){
    temp2=temp1->next;
    temp1->next=temp;
    temp=temp1;
    temp1=temp2;
  }
  head=temp;
}
