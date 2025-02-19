//  Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10
#include <stdio.h>

int main() {
    int num,mul;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        mul=num * i;
        printf("%d\n",mul);
    }
}
