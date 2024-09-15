//To print the Area & Perimeter of rectangle
#include <stdio.h>
int main() {
    float area,peri,l,b;
    printf("Enter l,b:");
    scanf("%f %f",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("Area & Perimeter of rectangle:%f %f",area,peri);
}
