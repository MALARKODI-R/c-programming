// Write a C program to check if two given non-negative integers have the same last digit
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 positive numbers: ");
    scanf("%d %d",&a,&b);

    if((a>=0) && (b>=0)){
        int last_num_a=a%10;
        int last_num_b=b%10;

        if(last_num_a==last_num_b)
           printf("Two integers have same last number!");
        else
           printf("Two integers doesn't have same last number! ");
    }
    else
       printf("Enter positive number!!");
}
