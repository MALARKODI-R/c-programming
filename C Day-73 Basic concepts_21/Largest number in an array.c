//Write a C program that accepts three integers from the user and finds the largest number among them
#include <stdio.h>
#include <limits.h>
int main() {
    int a[3];
    printf("Enter the elements of array: ");
    for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
    int largest=INT_MIN;
    for(int i=0;i<3;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    printf("%d is largest",largest);
}
