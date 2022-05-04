#include <stdio.h>
int main()
{
    int n, flag, i, j, m;
    scanf("%d", &m);
    scanf("%d", &n);
    // for(i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         flag=1;
    //         break;
    //     }
    // }

    for (i = m; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d \t", i);
    }

    // if (flag)
    // {
    //     printf("%d is not prime number\n", n);
    // }
    // else
    // {
    //     printf("%d is prime number\n", n);
    // }
    // return 0;
}