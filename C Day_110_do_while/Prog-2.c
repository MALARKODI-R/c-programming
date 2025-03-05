// Write a C program that calculates and prints the sum of prime numbers up to a specified limit (e.g., 50) using a do-while loop.
#include <stdio.h>
int main() {
    int prime, sum = 0, i, isPrime;
    do {
        printf("Enter a number (less than 50): ");
        scanf("%d", &prime);

        if (prime < 50 && prime > 1) {
            isPrime = 1;
            for (i = 2; i * i <= prime; i++) {
                if (prime % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                sum += prime;
            }
        }
    } while (prime < 50);
    printf("Sum of prime numbers: %d\n", sum);
}
