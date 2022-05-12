#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = *head_ref;
    if (*head_ref != NULL)
        (*head_ref)->prev = new_node;
    *head_ref = new_node;
}

void printList(struct Node *n)
{
    struct Node *last = n;
    printf("\nForward direction:");
    while (n)
    {
        last = n;
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\nBackward direction:");
    while (last)
    {
        printf("%d ", last->data);
        last = last->prev;
    }
}

void nodeAfter(struct Node *prev_node, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (prev_node == NULL)
    {
        printf("EMPTY");
        return;
    }
    new_node->data = new_data;
    new_node->next = prev_node->next;
    new_node->prev = prev_node;
    prev_node->next = new_node;
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void nodeBefore(struct Node **head_ref, struct Node *next_node, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;

    new_node->data = new_data;
    if (next_node == NULL)
    {
        printf("EMPTY");
        return;
    }
    // printf("%d",next_node->data);
    if(next_node->prev==NULL){
        new_node->next=next_node;
        new_node->prev=NULL;
        next_node->prev=new_node;
        *head_ref=new_node;
        return;
    }
    new_node->prev=next_node->prev;
    new_node->prev->next=new_node;
    new_node->next=next_node;
    new_node->next->prev=new_node;


    // new_node->prev = next_node->prev;
    // next_node->prev = new_node;
    // new_node->prev->next = new_node;
}

void append(struct Node **head_ref,int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;
    
}

void deleteKey(struct Node **head_ref,int key){
    struct Node *temp=*head_ref,*prev_node=NULL,*next_node=NULL;
    if(temp->data==key){
        *head_ref=temp->next;
        temp->next->prev=NULL;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=key){
        prev_node=temp;
        temp=temp->next;
        next_node=temp;
    }
    // printf("%d ",temp->data);
    if(temp==NULL){
        printf("Key not found");
        return;
    }
    if(temp->next==NULL){
        prev_node->next=NULL;
        free(temp);
        return;
    }
    next_node=temp->next;
    prev_node->next=next_node;
    next_node->prev=prev_node;
    free(temp);

}

int main()
{
    struct Node *head = NULL;
    push(&head, 10);
    // push(&head, 11);
    // push(&head, 12);
    // push(&head, 70);

    // printList(head);

    // nodeAfter(head->next, 69);

    nodeBefore(&head,head,100);

    // append(&head,420);

    // deleteKey(&head,70);
    printList(head);
}