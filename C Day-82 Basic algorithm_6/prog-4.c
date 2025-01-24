// Write a C program that checks if y is greater than x and z is greater than y, given three integers x, y, and z. If both conditions are true, the program returns true. Otherwise, it returns false
#include <stdio.h>

int main() {
    int x,y,z;
    printf("Enter the values of x,y and z: ");
    scanf("%d %d %d",&x,&y,&z);

    if((y>x) && (z>y))
        printf("True");
    else
        printf("False");
}
