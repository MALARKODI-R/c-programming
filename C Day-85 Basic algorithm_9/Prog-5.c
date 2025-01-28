//Write a C program to compute the sum of the elements of an array of integers
#include <stdio.h>

int main() {
    int a[5],sum=0;
    printf("Enter values of arry a: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("Sum of the array elements are %d",sum);
}
