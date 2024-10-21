//Basic program-1
#include <stdio.h>
int main() {
    int a,*ptr;
    a=10;
    ptr=(int *)&a;
    printf("The value of a is %d\n",*ptr);
    printf("The address of the value is %d",ptr);
}
