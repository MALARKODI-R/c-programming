// Write a program in C to find the sum of all elements of the array
#include <stdio.h>

int main() {
    int a[5]={1,6,3,4,2},sum=0;
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("The sum of the array elements is %d",sum);
    }
