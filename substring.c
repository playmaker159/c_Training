#include <stdio.h>

int main()
{
    char str1[] = "my is dlilfvkldj lkskdjfkl name apspkdio";
    char str2[] = "name";
    int i, count1, count2, j, temp, status = 1;
    for (i = 0; str1[i]; i++)
        ;
    count1 = i;
    for (i = 0; str2[i]; i++)
        ;
    count2 = i;
    for (i = 0; i < count1; i++)
    {
        // printf("%d",status);
        temp = i;
        if (str1[i] == str2[0])
            for (j = 0; j <= count2; j++)
            {
                // printf("%d",status);
                if(status==count2){
                    break;
                }
                // printf("inside_loop\t");
                
                if (str1[++temp] == str2[j + 1])
                    status += 1;
                else
                {
                    status = 0;
                    break;
                }
            }
        else
            continue;
    }
    if (status)
    {
        printf("Exists");
    }
    else
    {
        printf("doesnt exist");
    }
}