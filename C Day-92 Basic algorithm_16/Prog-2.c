//  Write a C program to check if the sum of all 5's in the array is exactly 15 in a given array of integers
#include <stdio.h>

int main() {
    int a[5],found=0,sum=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++){
        if(a[i]==5)
            sum=sum+a[i];
    }

    if(sum==15)
        printf("True");
    else
        printf("False");
}
