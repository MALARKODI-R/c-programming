// Write a C program to return the absolute value of a long integer
#include <stdio.h>

int main() {
    int a;
    printf("Enter the number either positive or negative: ");
    scanf("%d",&a);
    if(a<0){
        a=a*-1;
        printf("%d",a);
    }
    else{
        printf("%d",a);
    }
}
