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

void display(struct Node *n){
    if(n==NULL){
        printf("\nStack underflow\n");
        return;
    }
    while (n)
    {
        printf("%d ",n->data);
        n=n->next;
    }
    
}

int pop(struct Node **head_ref){
    int ele;
    struct Node *temp=*head_ref;
    *head_ref=temp->next;
    temp->next=NULL;
    ele=temp->data;
    free(temp);
    return ele;
}

int main()
{   
    int ele;
    struct Node *head=NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    display(head);
    ele=pop(&head);
    printf("\n%d\n",ele);
    display(head);
}