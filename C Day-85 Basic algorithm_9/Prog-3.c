//Write a C program to check a given array of integers of length 1 or more. Return true if the first element and the last element in the array are equal
#include <stdio.h>

int main() {
    int a[5];
    printf("Enter values of arry: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    if(a[0] == a[4])
        printf("values are equal");
    else
        printf("values aren't equal");
}
