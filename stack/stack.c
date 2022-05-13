#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int stack[5], top = -1;

int isEmpty()
{
    if (top == -1)
    {
        printf("\nStack underflow\n");
        return INT_MIN;
    }
    else
        return 0;
}

int isFull()
{
    if (top == 5 - 1)
    {
        printf("\nStack overflow\n");
        return 1;
    }
    else
        return 0;
}

void push(int ele)
{
    if (isFull())
    {
        return;
    }
    stack[++top] = ele;
}

int pop()
{
    int ele;
    if (isEmpty())
    {
        return INT_MIN;
    }
    return ele = stack[top--];
}

void display()
{
    int i;
    if (isEmpty())
    {
        return;
    }
    for (i = top; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
}

int peek()
{
    if (isEmpty())
    {
        return INT_MIN;
    }
    return stack[top];
}

int main()
{
    int ch, ele;
    do
    {
        printf("\n1.Push");
        printf("\n2.POP");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\n\nEnter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter element to be pushed:");
            scanf("%d", &ele);
            push(ele);
            break;
        case 2:
            ele = pop();
            printf("\n\nPopped element is:%d", ele);
            break;
        case 3:
            ele = peek();
            printf("%d", ele);
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    } while (1);
}