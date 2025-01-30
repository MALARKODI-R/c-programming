//Write a C program to create a new array containing the middle elements from the two given arrays of integers, each of length 5
#include <stdio.h>

int main() {
    int a[5],b[5];

    printf("Enter elements of array a: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("Enter elements of array b: ");
    for(int j=0;j<5;j++)
    scanf("%d",&b[j]);

    printf("%d\n",a[2]);
    printf("%d",b[2]);
}
