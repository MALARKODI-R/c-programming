//Write a C program to create a new array by swapping the first and last elements of a given array of integers whose length is at least 1
#include <stdio.h>

int main() {
    int a[5];

    printf("Enter elements of array a: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    int temp;
    temp=a[0];
    a[0]=a[4];
    a[4]=temp;

    printf("The swapped array is: ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
}
