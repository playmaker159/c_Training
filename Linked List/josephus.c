#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void append(struct Node **head_ref, int new_data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    newNode->data = new_data;
    newNode->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (last->next != *head_ref)
        {
            last = last->next;
        }
        last->next = newNode;
    }
    else
    {
        *head_ref = newNode;
        newNode->next = *head_ref;
    }
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
}

void josephus(struct Node **head_ref)
{
    struct Node *temp = *head_ref;
    struct Node *del = *head_ref;

    del = temp;
    temp = temp->next;
    del->next = temp->next;
    del = del->next;
    *head_ref = del;
    free(temp);
}

int main()
{
    struct Node *head = NULL;
    int i;
    for (i = 1; i <= 100; i++)
    {
        append(&head, i);
    }
    for (i = 1; i < 100; i++)
    {
        josephus(&head);
    }
    printf("%d ", head->data);
}