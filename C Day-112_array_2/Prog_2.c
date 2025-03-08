//Write a program in C to copy the elements of one array into another array
#include <stdio.h>

int main() {
    int a[5]={1,6,3,4,2},b[5];
    printf("The elements copied into the second array are:");
    for(int i=0;i<5;i++){
        b[i]=a[i];
        printf(" %d",b[i]);
    }
    }
