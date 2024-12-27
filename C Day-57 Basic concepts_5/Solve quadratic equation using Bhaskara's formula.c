/*Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
    Display a message if it is not possible to find the roots.*/
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,r1,r2;
    printf("Enter the coefficient of the polynimial: ");
    scanf("%f %f %f",&a,&b,&c);
    r1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    r2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    if(((b*b)-4*a*c)>0 && ((b*b)-4*a*c)!=0)
    printf("The roots are %f and %f\n",r1,r2);
    else
    printf("Impossible to find roots");
}
