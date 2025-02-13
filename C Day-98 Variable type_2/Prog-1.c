// Write a C program to convert a string to a long integer
#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[20]="12345";
    long int num=strtol(a,NULL,10);
    printf("%ld",num);
}
