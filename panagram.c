#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "the quick brown fox jumps over the lazy fox";
    int count[256] = {0}, i, status = 0;
    for (i = 0; str1[i]; i++)
    {
        count[str1[i]]++;
    }
    for (i = 97; i <=122; i++){
        if (count[i] == 0)
            break;
        else
        {
            status = 1;
        }
    }

    if (status)
    {
        printf("string is panagram");
    }
    else
        printf("String is not pnagram");
}