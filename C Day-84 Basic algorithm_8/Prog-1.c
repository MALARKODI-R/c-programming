//Write a C program to compute the sum of three given integers. Return the third value if the two values are the same

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a ,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    int sum=a+b+c;

    if(a==b)
       printf("%d",sum);
}
