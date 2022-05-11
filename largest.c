#include<stdio.h>

int max(int a, int b, int c)
{
     int m = a;
     (m < b) && (m = b);
     (m < c) && (m = c);
     return m;
}

int main(){
    int a=max(1,10,5);
    printf("%d ",a);
}