//  Write a program that converts Centigrade to Fahrenheit
#include <stdio.h>

int main() {
    float f,c;
    printf("Enter Centigrade: ");
    scanf("%f",&c);
    f=(c * 9/5) + 32;
    printf("%f",f);
}
