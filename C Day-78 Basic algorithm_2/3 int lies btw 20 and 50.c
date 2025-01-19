// Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and returns true if at least one of them is within the range. If none of the integers are within the range, the program returns false
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 integers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(((a>20 && a<50) || (b>20 && b<50) || (c>20 && c<50))){
        printf("True");
    }
    else{
        printf("False");
    }
}
