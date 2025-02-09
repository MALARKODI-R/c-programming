// Write a C program to check if the value of each element is equal or greater than the value of the previous element of a given array of integers
#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    int result=1;

    for(int i=1;i<5;i++){
        if(a[i]<a[i-1]){
            result=0;
            break;
        }
    }
    if(result)
    printf("True");
    else
    printf("False");
}
