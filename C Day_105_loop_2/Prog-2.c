// Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop
#include <stdio.h>

int main() {
    int ip,fact=1;
    printf("enter the number: ");
    scanf("%d",&ip);
    if(ip<=0){
        printf("Enter positive number!!");
        return 1;
    }
    int i=1;
    while(i<=ip){
            fact=fact*i;
            i++;
    }printf("The factorial of the given number is %d",fact);
}
