#include<stdio.h>
int main(){
    int arr[5]={5,1,6,2,9},i,j,k,min,temp;
    for ( i = 0; i < 5; i++)
    {
        min=i;
        for ( j = i+1; j < 5; j++)
        {
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        // printf("%d ",arr[min]);
        temp=arr[min];
        for ( ; min >i; min--)
        {
            arr[min]=arr[min-1];
        }
        arr[i]=temp;
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}