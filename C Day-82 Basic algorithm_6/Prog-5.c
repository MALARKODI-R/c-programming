// Write a C program to check three given integers and return true if one of them is 20 or more and less than one of the others
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    printf("Enter the values of x,y and z: ");
    scanf("%d %d %d",&x,&y,&z);

    if(abs(x-y)>=20 || abs(x-z)>=20 || abs(y-z)>=20)
        printf("True");
    else
        printf("False");
}
