// Area of circle
#include <stdio.h>
float area(float r){
    float a;
    a=3.14*r*r;
    return a;
}
float main() {
    float x=4,y;
    y=area(x);
    printf("%f",y);
}
