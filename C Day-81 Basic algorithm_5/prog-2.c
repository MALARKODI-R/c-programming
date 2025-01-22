//Write a C program that checks if a given non-negative number is a multiple of 3 or 7, but not both

#include <stdio.h>
int main() {
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);

    if(num>0){
        if((num%3==0 && num%7!=0) || (num%3!=0) && (num%7==0)){
            printf("True");
        }
        else{
            printf("False");
        }
    }
    else{
        printf("Enter positive number");
    }
}
