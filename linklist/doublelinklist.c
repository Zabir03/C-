#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL, *current = NULL;
int mydata;
insert()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of node of insert : ");
    scanf("%d", &mydata);
    newnode->data = mydata;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        current = head;
        while (current->next != NULL)
            current = current->next;
        current->next = newnode;
        newnode->prev = current;
    }
}
void printll()
{
    current = head;
    while (current != NULL)
    {
        printf("%d   ", current->data);
        current = current->next;
    }
    printf("NULL");
}
 int main()
{
    insert();
    insert();
    insert();

    printll();
    return 0;
}
