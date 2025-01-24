// Write a C program to check whether it is possible to add two integers to get the third integer from three given integers
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the values of a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)==c)
        printf("%d is equal to sum of %d and %d",c,a,b);
    else
        printf("Its not possible!!");
}
