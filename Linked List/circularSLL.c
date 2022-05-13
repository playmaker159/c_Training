#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;

    new_node->data = data;
    new_node->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
        {
            temp = temp->next;
        }
            temp->next = new_node;
    }
    else
    {
        new_node->next=new_node;
    }
    *head_ref = new_node;
    
}

void printList(struct Node *n)
{
    struct Node *temp = n;
    if (n != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != n);
    }
    printf("%d",temp->data);
}

int main()
{
    struct Node *head = NULL;
    // head->next=head;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    printList(head);
}