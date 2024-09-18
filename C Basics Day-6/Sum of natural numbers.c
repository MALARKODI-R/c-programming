//sum of natural numbers
#include <stdio.h>
int main() {
    int a,i,sum=0;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
         sum=sum+i;
         printf("%d \n",i);
    }
    printf("The sum is:%d",sum);
}
