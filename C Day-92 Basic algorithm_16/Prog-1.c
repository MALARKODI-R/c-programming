// Write a C program to check whether a given array of integers contains 5's and 7's
#include <stdio.h>

int main() {
    int a[5],found=0;
    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++){
        if(a[i]==5 || a[i]==7)
            found=1;
    }
    if(found)
    printf("True");
    else
    printf("False");
}
