//Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more
#include <stdio.h>

int main() {
    int a[5];
    int len=5;

    printf("Enter elements of array a: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("%d\n%d",a[0],a[len-1]);
}
