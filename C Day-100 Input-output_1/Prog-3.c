//  Write a C program that prints the perimeter of a rectangle using its height and width as inputs
#include <stdio.h>

int main() {
    float p,w,h;
    printf("Enter height and width of rectangle: ");
    scanf("%f %f",&h,&w);
    p = 2 * (h + w);
    printf("%f",p);
}
