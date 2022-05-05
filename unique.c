#include <stdio.h>
int main()
{
    int flag1, flag2, i, j, k, n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter redundant elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        flag1 = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                flag1 = 1;
                break;
            }
        }
        if (flag1 == 0)
        {
            for (k = i+1; k < n; k++)
            {
                flag2=0;
                if (arr[k] == arr[i])
                {
                    flag2 = 1;
                    break;
                }
            }
            if (flag2 == 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}