//Write a C program that finds all the divisors of an integer..
#include <stdio.h>
int main() {
    int a;
    printf("Enter integer: ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
}
