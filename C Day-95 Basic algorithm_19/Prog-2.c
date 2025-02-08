// Write a C program to create a new array taking the elements before the element value 5 from a given array of integers
#include <stdio.h>

int main() {
    int a[6];

    printf("Enter the elements of array: ");
    for(int i=0;i<6;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<6;i++){
        if(a[i]==5){
            break;
        }
        else{
            printf("%d ",a[i]);
        }
}
}
