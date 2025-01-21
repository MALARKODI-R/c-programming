// Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);

    int sum=a+b;

    if((sum>10) && (sum<20))
        printf("30");
    else
        printf("0");
}
