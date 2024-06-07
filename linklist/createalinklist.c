// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     *next;
//     struct node *next;
// };
// main()
// {
//     struct node *head;
//     struct node *one;
//     struct node *two;
//     struct node *three;

//     one = (struct node *)malloc(sizeof (struct node));
//     two = (struct node *)malloc(sizeof (struct node));
//     three = (struct node *)malloc(sizeof (struct node));

//     one->data = 100;
//     two->data = 200;
//     three->data = 300;

//     one->next = two;
//     two->next = three;
//     three->next = NULL;
// }
#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};

void printlinkedlist(struct node *p){
    while(p!=NULL){
        printf("%d \n",p->data);
        p=p->next;
    }
}

int main(){
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    
    one = (struct node *) malloc(sizeof (struct node));
    two = (struct node *) malloc(sizeof (struct node));
    three = (struct node *) malloc(sizeof (struct node));
    
    one->data=100;
    two->data=200;
    three->data=300;
    
    one->next=two;
    two->next=three;
    three->next=NULL;
    head=one;
    
    printlinkedlist(head);
    
    
}