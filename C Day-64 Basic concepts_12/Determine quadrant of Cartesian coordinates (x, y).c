//Determine quadrant of Cartesian coordinates (x, y)
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter the coordinates x and y:");
    scanf("%d %d",&x,&y);

    if((x>0) && (y>0))
        printf("Its belongs to 1st quadrant(+,+)");

    else if((x<0) && (y>0))
        printf("Its belongs to 2nd quadrant(-,+)");

    else if((x<0) && (y<0))
        printf("Its belongs to 3rd quadrant(-,-)");

    else
        printf("Its belongs to 4rth quadrant(+,-)");
}
