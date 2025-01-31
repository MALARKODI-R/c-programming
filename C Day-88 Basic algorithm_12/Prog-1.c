// Write a C program to compute the sum of the two given arrays of integers, length 3 and find the array that has the largest sum
#include <stdio.h>

int main() {
    int arr1[3],arr2[3],s1=0,s2=0;

    printf("Enter value of array-1: ");
    for(int i=0;i<3;i++)
    scanf("%d",&arr1[i]);

    printf("Enter value of array-2: ");
    for(int j=0;j<3;j++)
    scanf("%d",&arr2[j]);

    for(int i=0;i<3;i++)
        s1=s1+arr1[i];

    for(int j=0;j<3;j++)
        s2=s2+arr2[j];

    if(s1>s2){
        for(int i=0;i<3;i++)
            printf("%d ",arr1[i]);
    }
    else{
    for(int j=0;j<3;j++)
            printf("%d ",arr2[j]);
    }
}
