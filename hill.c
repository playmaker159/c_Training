// program to bubble sort
#include <stdio.h>
int main()
{
    int i, j, n, temp, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], a2[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        a2[i] = a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    // printf("Ascending Sorted array is: ");
    // for (i = 0; i < n; i++)
    //     printf("%d ", a[i]);

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a2[j] < a2[j + 1])
            {
                temp = a2[j];
                a2[j] = a2[j + 1];
                a2[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    // printf("\nDescending Sorted array is: ");
    // for (i = 0; i < n; i++)
    //     printf("%d ", a2[i]);

    j = 0;
    for (i = (n / 2) + 1; i < n; i++)
    {
        a[i] = a2[j];
        j++;
    }
    printf("\nFinal array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}