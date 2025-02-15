//  Write a C program that converts kilometers per hour to miles per hour
#include <stdio.h>

int main() {
    float k,m;
    printf("Enter kilometer: ");
    scanf("%f",&k);
    m = 0.62137 * k;
    printf("%f",m);
}
