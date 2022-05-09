#include<stdio.h>
int main(){
    char str[]="hello world";
    int i;
    for ( i = 0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    
}