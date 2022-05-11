#include <stdio.h>

void distinct(int arr[], int n, int count, int k)
{
    int i, j, l;
    for (i = 0; i < n; i++)
    {
        for (l = i; l < k; l++)
        {
            for (j = i; j < l; j++)
            {
                if (arr[l] == arr[j])
                    break;
            }
            if (i == j)
            {
                count++;
                printf("%d ", arr[i]);
            }
        }
    }
}

int main()
{
    int i, j, k = 2;
    int arr[5] = {1, 2, 2, 3, 4}, n = 5, count = 0;
        distinct(arr, n, 0, k);
}