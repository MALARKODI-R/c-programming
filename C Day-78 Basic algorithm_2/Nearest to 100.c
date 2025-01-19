//Write a C program to check which number is nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);

    if((a>b) && (a<100)){
        printf("%d is nearest to 100",a);
    }
    else if((a<b) && (a<100)){
        printf("%d is nearest to 100",b);
    }
    else if(a==b){
        printf("0");
    }
    else{
        printf("Enter a number below 100");
    }
}
