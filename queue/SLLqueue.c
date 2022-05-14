#include <stdio.h>
#include <stdlib.h>

struct QNode
{
    int data;
    struct QNode *next;
};

struct Queue
{
    struct QNode *front, *rear;
};

struct Queue *init()
{
    struct Queue *p = (struct Queue *)malloc(sizeof(struct Queue));
    p->front = p->rear = NULL;
    return p;
}

struct QNode *new_node(int k)
{
    struct QNode *new_node = (struct QNode *)malloc(sizeof(struct QNode));
    new_node->data = k;
    new_node->next = NULL;
    return new_node;
}

void enqueue(int k, struct Queue *q)
{
    struct QNode *temp = new_node(k);
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

void dequeue(struct Queue *q){
    struct QNode *temp=q->front;
    temp->data=q->front->data;
    temp->next=q->front->next;
    q->front=q->front->next;

    free(temp);
}

void display(struct Queue *q){
    struct QNode *temp=q->front;
    if(q->front==NULL){
        return;
    }
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}

int main()
{
    struct Queue *queue = init();
    enqueue(10, queue);
    enqueue(20, queue);
    enqueue(30, queue);
    dequeue(queue);
    display(queue);
}