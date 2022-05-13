#include<stdio.h>

int linear(int arr[],int n,int key){
    int i,flag=0;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==key){
            flag=1;
            return i;
        }
    }
    if(!flag){
        return 999;
    }
    
}

int main(){
    int arr[5]={4,8,9,6,10},n=5,key=9,a;
    a=linear(arr,n,key);
    // printf("%d",a);
    (a==999)?printf("Element not found") : printf("Found at position %d",a);
}