#include <stdio.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int partition(int arr[], int low, int high, int pivot)
{
    int i = low, j;
    for (j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[j], &arr[i]);
            i++;
        }
        else if (arr[j] == pivot)
        {
            swap(&arr[j], &arr[high]);
            j--;
        }
        swap(&arr[i], &arr[high]);
        return i;
    }
}

void quickSort(int arr1[], int arr2[], int low, int high)
{
    int pi;
    if (low < high)
    {
        pi = partition(arr1, low, high, arr2[high]);
        pi = partition(arr2, low, high, arr1[pi]);
        quickSort(arr1, arr2, low, pi - 1);
        quickSort(arr1, arr2, pi + 1, high);
    }
}

int main()
{
    int nuts[] = {'@', '%', '&', ')'};
    int bolts[] = {'%', ')', '@', '&'};
    int i;
    int n = sizeof(bolts) / sizeof(bolts[0]);
    quickSort(nuts, bolts, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("%c ", nuts[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%c ", bolts[i]);
    }
}