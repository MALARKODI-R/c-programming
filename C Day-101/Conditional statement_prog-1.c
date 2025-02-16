//Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1 == num2){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
}
