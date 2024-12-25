// Write a C program to calculate the distance between two points.
#include <stdio.h>
#include <math.h>
int main() {
    int a1,a2,b1,b2;
    float result;
    printf("Enter distances: ");
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    result=sqrt((a2-a1)*(a2-a1) + (b2-b1)*(b2-b1));
    printf("Distance: %f",result);
}
