//Write a C program to create a new array from two given arrays of integers, each of length 3
#include <stdio.h>

int main() {
    int a[3],b[3],result[6];

    printf("Enter elements of array a: ");
    for(int i=0;i<3;i++)
    scanf("%d",&a[i]);

    printf("Enter elements of array b: ");
    for(int j=0;j<3;j++)
    scanf("%d",&b[j]);

    for(int i=0;i<3;i++)
        result[i]=a[i];

    for(int j=0;j<3;j++)
        result[3+j]=b[j];

    printf("The merged array is:");
    for(int i=0;i<6;i++)
        printf("%d",result[i]);


    return 0;
}
