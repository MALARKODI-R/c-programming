// Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
#include <stdio.h>
int main() {
    int p, q, r, s;

    printf("Enter value of q, r, s (positive integers): ");
    scanf("%d %d %d", &q, &r, &s);

    if (q > 0 && r > 0 && s > 0) {
        printf("q = %d, r = %d, s = %d\n", q, r, s);
    } else {
        printf("Enter positive numbers for q, r, and s.\n");
        return 1;
    }

    printf("Enter value of p (even number): ");
    scanf("%d", &p);

    if (p % 2 != 0) {
        printf("Enter an even number for p.\n");
        return 1;
    }
    printf("p = %d\n", p);

    if (q > r && s > p && (r + s) > (p + q)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }
}
