// Write a C program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the updated array
#include <stdio.h>

int main() {
    int a[4];
    printf("Enter the elements of array: ");

    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);

    int temp=a[0];
    for(int i=0;i<3;i++){
        a[i]=a[i+1];
    }
    a[3]=temp;

    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
}
