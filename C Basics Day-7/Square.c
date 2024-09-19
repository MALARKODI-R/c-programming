// Program to print the square of the given range
#include <stdio.h>
int main() {
    int a,i;
    float b;
    printf("Enter the range: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=i*i;
        printf("The square root of %d is:%.2f\n",i,b);
    }
}
