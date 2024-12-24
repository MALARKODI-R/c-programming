// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value
#include <stdio.h>
int main() {
    int i1=15,i2=25;
    float c1=5,c2=4,avg;
    avg=((i1*c1)+(i2*c2))/(c1+c2);
    printf("%f",avg);
}
