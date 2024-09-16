=== Code Execution Successful ===#include <stdio.h>
#include<math.h>
int main() {
    float a1,a2,b1,b2,distance;
    printf("Enter the coordinates of point1:");
    scanf("%f %f",&a1,&a2);
    printf("Enter the coordinates of point2:");
    scanf("%f %f",&b1,&b2);
    distance=((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1));
    printf("The distance is:%f",sqrt(distance));
}
