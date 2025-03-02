//Write a C program that prompts the user to enter a series of numbers until they input a negative number. Calculate and print the sum of all entered numbers using a do-while loop
#include <stdio.h>

int main() {
    int a,sum=0;
    do{
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a>0){
            sum=sum+a;
        }
    }while(a>=0);
    printf("Sum of all numbers is:%d",sum);
}
