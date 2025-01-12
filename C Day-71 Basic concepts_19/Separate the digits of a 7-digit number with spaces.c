//Separate the digits of a 7-digit number with spaces
#include <stdio.h>
int main() {
    int a,divisor=1000000,digit;
    printf("Enter a 7 digit number: ");
    scanf("%d",&a);

    for (int i = 0; i < 6; i++) {
        int digit = a / divisor;
        printf("%d ", digit);
        a %= divisor;
        divisor /= 10;
    }

    printf("\n");
}
