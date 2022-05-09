#include<stdio.h>
int rev(char *p){
    int z=(*p==' '?0 : *p=='\0'?0:rev(p+1)+1);
    if(z){
        putchar(*p);
    }
    return z;
}
int main(){
    char *q="ab cd";
    int a;
    while (*q)
    {
        a=rev(q);
        q=q+a;
        if(*q==' '){
            putchar(*q);
            q++;
        }
    }
    
}