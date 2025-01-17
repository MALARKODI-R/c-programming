//Write a C program that accepts a sequence of different values and calculates the sum of the values before and after the maximum value.
#include <stdio.h>
int main() {
    int a[5] = {1, 2, 5, 4, 3};
    int maxIndex = 0, sumBeforeMax = 0, sumAfterMax = 0;
    for (int i = 1; i < 5; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("Max value: %d at index %d\n", a[maxIndex], maxIndex);
    for (int i = 0; i < maxIndex; i++) {
        sumBeforeMax += a[i];
    }
    for (int i = maxIndex + 1; i < 5; i++) {
        sumAfterMax += a[i];
    }
    printf("The sum before the max value is: %d\n", sumBeforeMax);
    printf("The sum after the max value is: %d\n", sumAfterMax);
}
