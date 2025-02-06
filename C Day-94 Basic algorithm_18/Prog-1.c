//Write a C program to check a given array of integers. The program will return true if the given array contains two 5's next to each other, or two 5's separated by one element..
#include <stdio.h>

int main() {
    int a[5],found=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++){
        if(a[i]==5 && a[i+1]==5){
            found=1;
            break;
        }
    }
    for(int i=0;i<5;i++){
        if(i<3 && a[i]==5 && a[i+2]==5){
            found=1;
            break;
        }
    }
    if(found)
    printf("True");
    else
    printf("False");
}
