// Write a C program to compute the sum of the three integers. Do not count a value that is 13 and add it to the sum.

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a ,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    int sum=a+b+c;

    if(a==13)
       printf("0");
    else if(b==13)
       printf("%d",a);
    else if(c==13)
       printf("%d",a+b);
    else
       printf("%d",sum);
}
