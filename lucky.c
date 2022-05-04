#include<stdio.h>
int main(){
   int num=165,lucky;
    lucky=num%9==0?9:num%9;
    printf("%d\n",lucky);
    return 0;
}