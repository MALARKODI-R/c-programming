// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);

    if((a>100 && a<200) || (b>100 && b<200)){
        printf("True");
    }
    else{
        printf("False");
    }
}
