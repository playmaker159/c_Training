#include<stdio.h>
char test[100];
int i=0;
char *reverse(char *p){
    if(*p){
        reverse(p+1);
        // printf("%c",*p);
        test[i++]=*p;
        return test;
    }
}

int main(){
    char str[100]="kini";
    char *p;
    
    p=reverse(str);

    printf("%p",p);
    // for(i=0;test[i];i++)
    //     printf("%c",test[i]);
    return 0;

}