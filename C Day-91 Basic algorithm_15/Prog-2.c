//Write a C program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integers
#include <stdio.h>

int main() {
    int a[5],i;
    int sum=0,found=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++){
        if(a[i]!=17)
        sum=sum+a[i];
        found=1;}

    if(found)
    printf("The sum is %d",sum);
    else
    printf("0");
}
