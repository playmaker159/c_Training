#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if(i==j){
            printf("%d ",arr[i]);
        }
    }
    
    
}