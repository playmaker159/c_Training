#include<stdio.h>
#include<math.h>
int main(){
    int fib1=0,fib2=1,sum,num=55,i,nth;
    double xx,yy;
    int n=11;
    double x,y;

    // fib
    // for(i=0;i<num;i++){
    //     // printf("%d\t",fib1);
    //     sum=fib1+fib2;
    //     // for nth
    //     nth=fib1;
    //     fib1=fib2;
    //     fib2=sum;
    // }
    // for nth
    // printf("%d",nth);
    
    // 5n^2+4 or 5n^2-4
     x=5*pow(num,2)+4;
     y=5*pow(num,2)-4;
     printf("%lf\t%lf\n",x,y);
     xx= sqrt(x)*sqrt(x);
     yy= sqrt(y)*sqrt(y);
     if (x == xx||y==yy)
          printf("%d is a fibbonacci Number\n",num);
          else
          printf("Not a fib\n");

    return 0;
}