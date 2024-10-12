//concatenate two strings
#include <stdio.h>
#include <string.h>
int main() {
    char a[40]="Welcome to";
    char b[20]=" our nation";
    strcat(a,b);
    printf("The modified string is %s",a);
}
