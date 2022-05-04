#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,temp,count=0,digit;

    printf("Enter number:");
    scanf("%d",&num);

    temp=num;

    while (temp>0)
    {
        temp/=10;
        count++;
    }
    temp=num;
    while (num>0)
    {
        digit=num%10;
        sum+=pow(digit,count);
        num/=10;
    }
    sum==temp?printf("Armstrong number\n"):printf("Not armstrog number\n");
    printf("%d\n",sum);

}