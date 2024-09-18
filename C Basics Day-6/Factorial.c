//To print factorial of the given number
#include <stdio.h>
int main() {
    int a,i,fact=1;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
         fact=fact*i;
    } printf("%d \n",fact);
}
