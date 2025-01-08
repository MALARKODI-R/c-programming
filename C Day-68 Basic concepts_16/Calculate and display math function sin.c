// Calculate and display sin⁡(1x)\sin(\frac{1}{x})sin(x1) for a real number xxx
#include <stdio.h>
#include <math.h>
int main() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("%f",sin(1/x));
}
