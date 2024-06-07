#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
	
};
struct node *head=NULL,*current=NULL;
int mydata;

insert(){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data to be inserted");
	scanf("%d",&mydata);
	newnode->data=mydata;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		
	}
	else{
		current=head;
		while(current->next!=NULL)
		current=current->next;
		current->next=newnode;
		newnode->prev=current;
		
	
}
}
printll(){
		current=head;
		while(current!=NULL){
		printf("%d  ",current->data);
		current=current->next;
	
	}
	printf("NULL");
}	

reverselist(){
	printf("\n reverse linked list   ");
	current=head;
	while(current->next!=NULL)
		current=current->next;
	while(current!=NULL)
		{
			printf("%d  ",current->data);
			current=current->prev;
		}
}
int main(){
	
	insert();
	insert();
	insert();
	printll();
	reverselist();
    return 0;
	
}