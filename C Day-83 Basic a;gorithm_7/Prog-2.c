//Write a C program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);

    if((a>10 && a<99) && (b>10 && b<99)){
    if(a/10 == b/10 || a/10 == b%10 || a%10 == b/10 || a%10 == b%10) {
        printf("True");
    }
    else{
        printf("False");
    }
    }
    else{
        printf("Enter value in thr gn range");
    }
}
