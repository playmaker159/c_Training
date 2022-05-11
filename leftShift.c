#include <stdio.h>

void swap(int arr[], int n)
{
    int arr2[5], i;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr2[n - i - 1] = arr[i];
        }
        else
        {
            arr2[i - 1] = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        arr[i] = arr2[i];
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5}, k = 2, i, count;
    for (i = 0; i < k; i++)
    {
        swap(a, 5);
    }
}