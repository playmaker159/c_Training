#include <stdio.h>

int binary(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = 10, key = 8, a;
    a = binary(arr, 0, n - 1, key);
    (a == -1) ? printf("Element not found") : printf("Element found in index %d", a);
}