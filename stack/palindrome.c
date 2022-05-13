#include<stdio.h>

int stack[4],top=-1;

void push(int ele){
    stack[++top]=ele;
}

int isPlindrome(){
    int low=0,temp=top,flag=0;
    while (low!=(top/2)+1)
    {
        if(stack[low]==stack[temp]){
            flag=1;
            temp--;
            low++;
        }
        else{
            flag=0;
            break;
        }
    }
    return flag;
    
}

int main(){
    int pal;
    push(1);
    push(2);
    push(2);
    push(1);
    pal=isPlindrome();
    (pal)?printf("Is palindrome\n"):printf("Not palindrome");
}