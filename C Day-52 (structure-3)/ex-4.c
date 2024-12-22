// Define a structure named Circle to represent a circle with a radius. Write a C program to calculate the area and perimeter of two circles and display the results.
#include<stdio.h>
struct circle{
    float radius;
};
float area_circle(struct circle c){
    return 3.14 * c.radius * c.radius;
}
float peri_circle(struct circle c){
    return 2 * 3.14 * c.radius;
}
int main(){
    struct circle c1,c2;
    c1.radius=23.5;
    c2.radius=84.3;
    printf("Circle1:\n");
    printf("Area=%f\n",area_circle(c1));
    printf("perimeter=%f\n",peri_circle(c1));
    printf("Circle2:\n");
    printf("Area=%f\n",area_circle(c2));
    printf("Perimeter=%f",peri_circle(c2));
}
