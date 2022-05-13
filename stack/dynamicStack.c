#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    int capacity;
    int *arr;
};

struct Stack *initialize(int c)
{
    struct Stack *temp = (struct Stack *)malloc(sizeof(struct Stack));
    temp->top=-1;
    temp->capacity=c;
    temp->arr=(int *)malloc(temp->capacity * sizeof(int));
    return temp;
}

void push(struct Stack *s,int ele){
    if(s->top==s->capacity-1){
        printf("\nStack overflow\n");
        return;
    }
    s->arr[++s->top]=ele;
    printf("%d pushed on to stack\n",ele);
}

int pop(struct Stack *s){
    int ele;
    if(s->top==-1){
        printf("Stack underflow");
        return -98643;
    }
    ele=s->arr[s->top--];
    return ele;
}
void display(struct Stack *s){
    int i;
    if(s->top==-1){
        printf("Stack underflow");
        return;
    }
    for ( i = s->top; i >= 0; i--)
    {
        printf("%d ",s->arr[i]);
    }
    
}
int main(){
    struct Stack *n;
    int x;
    n=initialize(5);
    push(n,10);
    push(n,59);
    x=pop(n);
    printf("Popped element %d\n",x);
    display(n);
}