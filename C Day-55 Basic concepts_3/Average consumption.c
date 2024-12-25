// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
#include <stdio.h>
int main() {
    int distance;
    float km,result;
    printf("Enter distance and kilometer: ");
    scanf("%d %f",&distance,&km);
    result=distance/km;
    printf("Average consumption: %f",result);
}
