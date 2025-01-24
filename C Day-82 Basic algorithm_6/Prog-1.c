//Write a C program to compute the sum of the two given integers. Return 18 if one of the integer values given is in the range 10..20 inclusive
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);

    int sum=a+b;
    if((sum>10) && (sum<20))
       printf("18");
}
