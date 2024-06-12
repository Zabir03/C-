#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL, *current = NULL;
int mydata;
void insert()
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data of node to append: ");
    scanf("%d", &mydata);
    newnode->data = mydata;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

checkdouble()
{
    struct Node *p1, *p2;
    int flag=0,d;
    p1=head;
    while(p1!=NULL)
     d=p1->data*p1->data;
     p2=head;
     while (p2!=NULL)
     {
        if(p2->data==d){
            printf("%d",d);
            p2=p2->next;
        }
     }
     p1=p1->next;
     
    }



main()
{
    int ch;
    while (1)
    {
        printf("press 1 to create linked list\n");
        printf("press 2 to check for double\n");
        printf("press 3 to exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            checkdouble();
            break;
        case 3:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
}