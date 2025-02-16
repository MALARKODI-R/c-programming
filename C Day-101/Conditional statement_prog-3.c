//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        printf("(%d,%d) lies in first quadrant",a,b);
    }
    else if(a<0 && b>0){
        printf("(%d,%d) lies in second quadrant",a,b);
    }
    else if(a<0 && b<0){
        printf("(%d,%d) lies in third quadrant",a,b);
    }
    else{
        printf("(%d,%d) lies in fourth quadrant",a,b);
    }
    return 0;
}
