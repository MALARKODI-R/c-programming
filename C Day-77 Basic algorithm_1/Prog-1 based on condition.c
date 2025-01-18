//Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    if(((a==30) || (b==30)) || (sum==30)){
        printf("True");
    }
    else{
        printf("False");
    }
}
