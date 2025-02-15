//  Write a C program that calculates the volume of a sphere
#include <stdio.h>

int main() {
    float s,r;
    printf("Enter radius of sphere: ");
    scanf("%f",&r);
    s = (4.0/3.0) * 3.14 * r * r * r;
    printf("%f",s);
}
