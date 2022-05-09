#include<stdio.h>
int main(){
    int i=600;
    char *p=(char *)&i;
    printf("%d",*p);
}