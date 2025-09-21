#include <stdio.h>
int main() {
    int a=234;
    printf("Yr:%d\n",a/365);
    a=a%365;
    printf("Month:%d\n",a/30);
    a=a%30;
    printf("Weeks:%d\n",a/7);
    a=a%7;
    printf("Days:%d\n",a);
    return 0;
}
