//Write a C program to check if two numbers in a pair are in ascending order or descending order.
#include <stdio.h>
int main() {
    int a,b,sum=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("The numbers between the intervals are\n");

    if(a<b){
        for(int i=a;i<=b;i++){
            printf("%d\n",i);
        }printf("The numbers are in ascending order\n");
    }

    if(a>b){
        for(int i=a;i>=b;i--){
            printf("%d\n",i);
        }printf("The numbers are in decending order\n");
    }
}
