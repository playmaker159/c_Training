#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int stack[10], top1 = -1, top2 = 10;

int isEmpty1()
{
    if (top1 == -1)
    {
        printf("\nStack underflow\n");
        return INT_MIN;
    }
    else
        return 0;
}

int isEmpty2()
{
    if (top2 == 10)
    {
        printf("\nStack underflow\n");
        return INT_MIN;
    }
    else
        return 0;
}

int isFull1()
{
    if (top1 == top2 - 1)
    {
        printf("\nStack overflow\n");
        return 1;
    }
    else
        return 0;
}

int isFull2()
{
    if (top2 == top1 - 1)
    {
        printf("\nStack overflow\n");
        return 1;
    }
    else
        return 0;
}

void push1(int ele)
{
    if (isFull1())
    {
        return;
    }
    stack[++top1] = ele;
}

void push2(int ele)
{
    if (isFull2())
    {
        return;
    }
    stack[--top2] = ele;
}

int pop1()
{
    int ele;
    if (isEmpty1())
    {
        return INT_MIN;
    }
    return ele = stack[top1--];
}

int pop2()
{
    int ele;
    if (isEmpty2())
    {
        return INT_MIN;
    }
    return ele = stack[top2++];
}

void display1()
{
    int i;
    if (isEmpty1())
    {
        return;
    }
    for (i = top1; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
}

void display2()
{
    int i;
    if (isEmpty2())
    {
        return;
    }
    for (i = top2; i < 10; i++)
    {
        printf("%d\t", stack[i]);
    }
}

int peek1()
{
    if (isEmpty1())
    {
        return INT_MIN;
    }
    return stack[top1];
}

int peek2()
{
    if (isEmpty2())
    {
        return INT_MIN;
    }
    return stack[top2];
}

int main()
{
    int ch, ele;
    do
    {
        printf("\nStack one operations:");
        printf("\n1.Push");
        printf("\n2.POP");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");

        printf("\nStack Two operations:");
        printf("\n6.Push");
        printf("\n7.POP");
        printf("\n8.Peek");
        printf("\n9.Display");
        printf("\n10.Exit");

        printf("\n\nEnter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter element to be pushed:");
            scanf("%d", &ele);
            push1(ele);
            break;
        case 2:
            ele = pop1();
            printf("\n\nPopped element is:%d", ele);
            break;
        case 3:
            ele = peek1();
            printf("%d", ele);
            break;
        case 4:
            display1();
            break;

        case 6:
            printf("\nEnter element to be pushed:");
            scanf("%d", &ele);
            push2(ele);
            break;
        case 7:
            ele = pop2();
            printf("\n\nPopped element is:%d", ele);
            break;
        case 8:
            ele = peek2();
            printf("%d", ele);
            break;
        case 9:
            display2();
            break;

        case 5:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    } while (1);
}