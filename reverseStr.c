#include<stdio.h>
void rev(char *str){
    if(*str){
        rev(str+1);
        printf("%c",*str);
    }
}
int main(){
    char str[]="hello";
    rev(str);
}