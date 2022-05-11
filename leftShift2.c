#include <stdio.h>

void swap(int arr[], int n)
{
    int temp, i;
    temp = arr[0];
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i, k = 2;
    for (i = 0; i < k; i++)
    {
        swap(arr, 5);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}