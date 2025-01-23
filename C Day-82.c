//takes an integer n as input and returns 1 if the remainder of n divided by 10 is less than or equal to 2 or greater than or equal to 8, and 0 otherwise.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if((n%10 <=2) || (n%10>=8))
         printf("1");
    else
         printf("0");
}
