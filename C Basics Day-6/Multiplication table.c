//Multiplication table for the given number
#include <stdio.h>
int main() {
    int a,i,b;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
         b=a*i;
         printf("%d*%d=%d \n",a,i,b);
    }
}
