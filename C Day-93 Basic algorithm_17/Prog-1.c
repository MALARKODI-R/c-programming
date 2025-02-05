//Write a C program to check whether a given array of integers contains 5 next to a 5 somewhere
#include <stdio.h>

int main() {
    int a[5];
    int found=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++){
        if(a[i]==5 && a[i+1]==5){
            found=1;
        }
    }

    if(found)
    printf("True");
    else
    printf("False");
}
