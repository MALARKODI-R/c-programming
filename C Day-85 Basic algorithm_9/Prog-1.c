//Write a C program to check if two or more nonnegative integers have the same rightmost digit
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);

    if(a%10 == b%10)
        printf("The given integers have the same rightmost digit");
    else
        printf("The given integers doesn't have the same rightmost digit");
}
