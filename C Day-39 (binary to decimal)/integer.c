//Binary to decimal
#include <stdio.h>
int main() {
    int binary = 1001110, decimal = 0, i = 0;
    while (binary != 0) {
        int last_digit = binary % 10;
        decimal = decimal + last_digit * (1 << i);
        binary /= 10;
        i++;
    }
    printf("The converted decimal is %d\n", decimal);
}
