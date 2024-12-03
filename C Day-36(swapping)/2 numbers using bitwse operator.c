//Swapping 2 numbers using bitwise operator
#include <stdio.h>
int main() {
    int a=2,b=1;
    printf("Before swapping:%d %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swappinng:%d %d",a,b);
}
