#include <stdio.h>

static char arr[100];
    static int i;
int revStr(char *p)
{
    int z = (*p == ' ' ? 0 : *p == '\0' ? 0
                                        : revStr(p + 1) + 1);
    if (z)
        // putchar(*p);
    arr[i++] = *p;
    return z;
}

void revWord(char *p){
    // if(*p==' '){
    //     putchar(" ");
    //     p++;
    // }
    if(*p){
        revWord(p+1);
        printf("%c",*p);
    }
}

int main()
{
    char *p = "jack and jill";
    int a;
    while (*p)
    {
        a = revStr(p);
        p = p + a;
        if (*p == ' ')
        {
            // putchar(*p);
            p++;
        }
    }
    // for(i=0;arr[i];i++);
    //     printf("%c",arr[i]);
    revWord(arr);
}