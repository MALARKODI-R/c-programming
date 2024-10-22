// assign the address of variable to pointer
#include <stdio.h>

int main() {
    int a,*ptr;
    a=25;
    ptr=(int *)&a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",ptr);
    printf("%d",*ptr);
}
