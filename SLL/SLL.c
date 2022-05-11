#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;

    *head_ref = new_node;
}

void printList(struct Node **head_ref)
{
    int count = 0;
    struct Node *new_node = *head_ref;
    while (new_node != NULL)
    {
        printf("%d ", new_node->data);
        new_node = new_node->next;
        count++;
    }
    printf("\n The count is:%d\n", count);
}

void swap(struct Node **head_ref, int x, int y)
{
    {
        struct Node *prevX = NULL, *tempx = *head_ref;
        while (tempx && tempx->data != x)
        {
            prevX = tempx;
            tempx = tempx->next;
        }

        struct Node *prevY = NULL, *tempy = *head_ref;
        while (tempy && tempy->data != y)
        {
            prevY = tempy;
            tempy = tempy->next;
        }
        if(prevX==NULL){
            *head_ref=tempy;
        }
        else
        prevX->next = tempy;

        if(prevY==NULL){
            *head_ref=tempx;
        }
        prevY->next = tempx;

        struct Node *temp = tempy->next;
        tempy->next = tempx->next;
        tempx->next = temp;
    }
}

void append(struct Node **head_ref, int new_data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    newNode->data = new_data;
    newNode->next = NULL;

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void reverse(struct Node **head_ref)
{
    struct Node *cur = *head_ref, *prev = NULL, *next = NULL;
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head_ref = prev;
}

void sort(struct Node **head_ref){
    
}

int main()
{
    struct Node *head = NULL;

    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    printList(&head);
    append(&head, 10);
    // printf("\n");
    // printList(&head);

    printList(&head);
    swap(&head,8,7);
    printList(&head);

    // reverse(&head);
    // printList(&head);
    sort(&head);
}