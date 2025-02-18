//  Write a C program that calculates the product of numbers from 1 to 5 using a while loop
#include <stdio.h>

int main() {
    int a=5,prod=1;
    for(int i=1;i<=a;i++){
        prod=prod*i;
    }printf("%d ",prod);
}
