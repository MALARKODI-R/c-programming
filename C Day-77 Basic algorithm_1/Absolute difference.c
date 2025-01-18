//  Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int dif=abs(51-a);

    if(a>51)
      printf("%d",dif*3);
    else
      printf("%d",dif);
}
