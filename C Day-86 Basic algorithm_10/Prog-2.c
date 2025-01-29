// Write a C program to reverse a given array of integers of length 5
#include <stdio.h>

int main() {
    int a[4];
    printf("Enter the elements of array: ");

    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);

    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
}
