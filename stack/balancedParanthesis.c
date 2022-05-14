#include <stdio.h>

char stack[100], top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop(){
    return stack[top--];
}

int isMatchingPair(char ch1, char ch2)
{
    if (ch1 == '(' && ch2 == ')')
        return 1;
    else if (ch1 == '{' && ch2 == '}')
        return 1;
    else if (ch1 == '[' && ch2 == ']')
        return 1;
    else
        return 0;
}

char stackify(char *str)
{
    int i;
    char ch;
    int flag;
    for (i = 0; str[i]; i++)
    {
        // printf("%d ",i);
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            ch=pop();
            // printf("%c %c",str[i],ch);
            flag=isMatchingPair(ch,str[i]);
            // printf("%d ",flag);
            if(flag==0){
                break;
            }
        }
    }
    return flag;
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%c ", stack[i]);
    }
}

int isBalanced()
{

}

int main()
{
    int flg;
    char str[] = "[()]{}{[()()]()}";
    flg=stackify(str);
    display();
    (flg)?printf("Balanced"):printf("Not balanced");
}