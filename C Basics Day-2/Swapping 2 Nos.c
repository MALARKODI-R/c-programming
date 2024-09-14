//Swapping two numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:%d %d",a,b);
    }
