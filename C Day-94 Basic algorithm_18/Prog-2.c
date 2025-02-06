//Write a C program to check a given array of integers. The program will return true if the given array contains either 2 even or 2 odd values all next to each other.
#include <stdio.h>

int main() {
    int a[5],found=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    //two even
    for(int i=0;i<4;i++){
        if(a[i]%2==0 && a[i+1]%2==0){
            found=1;
            break;
        }
    }
    //two odd
    if(!found){
    for(int i=0;i<4;i++){
        if(a[i]%2!=0 && a[i+1]%2!=0){
            found=1;
            break;
        }
    }
    }
    if(found)
    printf("True");
    else
    printf("False");
}
