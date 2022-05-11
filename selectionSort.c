#include<stdio.h>

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

int main(){
    int arr[5]={7,9,2,1,5},i,j,min;
    for ( i = 0; i < 5-1; i++)
    {
        min=i;
        for ( j = i+1; j < 5; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        printf("%d",arr[min]);
        swap(&arr[i],&arr[min]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\t%d",arr[i]);
    }
    
    
}