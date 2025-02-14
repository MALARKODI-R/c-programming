/* Write a C program to convert a string to a double.

Test Data and Expected Output :

Input a number : 25
 The original number is : 25.000000
 After division by 2 the number is : 12.500000*/
#include <stdio.h>

int main() {
    double a;
    printf("Enter a number: ");
    scanf("%lf",&a);
    printf("The original number is :%f\n",a);
    printf("After division by 2 the number is :%f",a/2);

}
