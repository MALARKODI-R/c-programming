//Write a C program to check a given integer and return true if it is within 10 of 100 or 200
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if((a>10) && ((a<100) || (a<200))){
        printf("True");
    }
    else{
        printf("False");
    }
}
