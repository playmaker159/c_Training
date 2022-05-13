#include <stdio.h>
int queue[5], front = -1, rear = 4;

void enqueue(int ele)
{
    if (front == -1)
    {
        front = 0;
    }
    // if(rear==5){
    //     printf("queue Full\n");
    //     rear--;
    //     return;
    // }
    rear = (rear+1) % 5;
    queue[rear] = ele;
}

int dequeue()
{
    int ele;
    if (front == -1)
    {
        printf("\nQueue empty\n");
    }
    ele = queue[front];
    front++;
    front=front%5;
    return ele;
}

void display()
{
    int temp = front;
    // if(temp==5){
    //     temp=0;
    // }
    // printf("%d\n",temp);
    if (rear==front)
    {
        printf("Overflow");
    }
    
    while (temp != rear)
    {
        printf("%d ", queue[temp]);
        temp++;
        temp=temp%5;
    }
    printf("%d",queue[temp]);

}

int main()
{
    int ele;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    // enqueue(6);

    // ele = dequeue();
    // enqueue(10);
    display();
}