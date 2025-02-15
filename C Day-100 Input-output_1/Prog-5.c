//   Write a C program that takes hours and minutes as input, and calculates the total number of minutes
#include <stdio.h>

int main() {
    int h,m;
    printf("Enter hours and minutes: ");
    scanf("%d %d",&h,&m);
    m = h*60 + m;
    printf("%d",m);
}
