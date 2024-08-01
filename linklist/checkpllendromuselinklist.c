#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head=NULL,*current;
int mydata;
insert() {
struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data of node to append : ");
    scanf(" \n %d", &mydata);
	newnode->data = mydata;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    } 
	else {
        current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}


void printList() {
	current=head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

insertbeg(){
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data of node to be inserted at begining ");
    scanf(" \n %d", &mydata);
	newnode->data = mydata;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    } 
    else
    {
    	newnode->next=head;
    	head=newnode;
	}
}


insertposition(){
	printf("enter position NO to insert node (1-N)");
	int pos;
	scanf("%d", &pos);
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter data of node to insert at specific position");
    scanf("%d", &mydata);
	newnode->data = mydata;
    newnode->next = NULL;
    
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    }
    
    else
    {
        current = head;
        for(int i=1;i<pos-1;i++)
        current = current->next;
        newnode->next=current->next;
		current->next=newnode;
    }
    
}

struct Node* deletefirst(){
	head=head->next;
	
}

deletelast(){
	current = head;
	while(current->next->next!=NULL) {
		current=current->next; }
	current->next=NULL;
}


int main() {
    insert();
    insert();
    insert();
    printList();
   
    deletelast();
    printList();
    
    return 0;
}
