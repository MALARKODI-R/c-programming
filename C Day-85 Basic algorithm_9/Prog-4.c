//Write a C program to check two given arrays of integers of length 1 or more. Return true if they have the same first element or if they have the same last element
#include <stdio.h>

int main() {
    int a[5],b[5];
    printf("Enter values of arry a: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("Enter values of arry b: ");
    for(int j=0;j<5;j++)
    scanf("%d",&b[j]);

    if(a[0] == b[0] && a[4]==b[4])
        printf("values are equal");
    else
        printf("values aren't equal");
}
