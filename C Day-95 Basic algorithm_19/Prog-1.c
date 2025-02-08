//Write a C program to shift an element in the left direction and return a newly created array
#include <stdio.h>

int main() {
    int a[6]={1,7,3,7,2,1},result;

    printf("The new array is:");

    for(int i=0;i<6;i++){
        result=a[i+1];
        printf("%d ",result);
        }
}
