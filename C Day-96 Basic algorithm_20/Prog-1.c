// Write a C program to create a array taking the elements after the element value 5 from a given array of integers.
#include <stdio.h>

int main() {
    int a[5]={4,3,5,8,1};
    int found=0;

    for(int i=0;i<5;i++){
        if(found){
            printf("%d ",a[i]);
        }
        if(a[i]==5){
            found=1;
        }
    }
}
