//  Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);

    int sum=a+b;

    if(a==b){
        sum=sum*3;
        printf("The sum=%d",sum);
    }
    else
       printf("The sum=%d",sum);
}
