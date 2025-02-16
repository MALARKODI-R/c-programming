//Write a C program to calculate the root of a quadratic equation
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float discriminant, root1, root2;
    printf("Enter the coefficients(a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    } else {
        discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
        } else if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("The root is real and the same.\n");
            printf("Root: %.2f\n", root1);
        } else {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The roots are complex.\n");
            printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }
}
