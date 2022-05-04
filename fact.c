#include<stdio.h>
int main(){
    int fact=1,num;
    int i;
    scanf("%d",&num);
    // 4! 4*3*2*1 or 1*2*3*4
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d \n",fact);
    return 0;
}