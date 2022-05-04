#include<stdio.h>
int main(){
    int rev=0,num,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse of %d is %d\n",temp,rev);
    if(temp==rev){
        printf("%d is a palindrome\n",temp);
    }
    else{
        printf("%d is not a palindrome\n",temp);
    }
}