//displaying number using dot operator in union
#include<stdio.h>
void main(){
    union number{
        int n1,n2;
    };
    union number x;
    printf("Enter number 1: ");
    scanf("%d",&x.n1);
    printf("The value of n1=%d\n",x.n1);
    printf("Enter number 2: ");
    scanf("%d",&x.n2);
    printf("The value of n2=%d",x.n2);
}
