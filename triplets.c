#include <stdio.h>
int main()
{
    int a[10];
    int val = 6, i, j, k,n;

    printf("Enter number of ele:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for ( j = i+1; j < n ;j++)
        {
            for ( k = j+1; k < n; k++)
            {
                if(a[i]+a[j]+a[k]==val)
                {
                    printf("%d + %d + %d\n",a[i],a[j],a[k]);
                }
            }
            
        }
        
    }
    

    return 0;
}