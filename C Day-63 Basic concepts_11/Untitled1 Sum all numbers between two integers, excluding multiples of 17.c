//Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers
#include <stdio.h>
int main() {
    int a,b,sum=0;
    printf("Enter 2 integer: ");
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++){
        if(i%17!=0){
            sum=sum+i;
        }
    }

    printf("The sum=%d",sum);
}
