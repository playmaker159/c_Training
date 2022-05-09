#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "silent";
    char str2[] = "liste";
    int count[256] = {0}, i, status = 0;
    for (i = 0; str1[i]; i++)
    {
        count[str1[i]]++;
    }
    for (i = 0; str2[i]; i++)
    {
        count[str2[i]]--;
    }
    for (i = 0; i < 256; i++)
        if (count[i] == 0)
            continue;
        else
        {
            status = 1;
            break;
        }

    if (!status)
    {
        printf("Two strings are anagram");
    }
    else
        printf("Strings are not anagram");
}