// Write a C program to convert a string to an unsigned long integer.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "123456";
    unsigned long int num;

    num = strtoul(str, NULL, 10);

    printf("Converted number: %lu\n", num);
}
