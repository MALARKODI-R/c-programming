//Write a C program that checks if a positive integer is divisible by either 3 or 7, or both. If the integer is a multiple of 3, then the program will return true. Similarly, if the integer is a multiple of 7, then also the program will return true. If the integer is not a multiple of 3 or 7, then the program will return false.
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0){
    if(a%3==0 || a%7==0){
        printf("True");
    }
    else{
        printf("False");
    }
    }
    else{
        printf("enter positive number!!");
    }
}
