// Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered
#include <stdio.h>

int main() {
    int ip,sum=0;
    while(1){
        printf("enter the number: ");
        scanf("%d",&ip);
        if(ip==0){
            break;
        }
        if(ip>0){
            sum=sum+ip;
        }
    }printf("The sum of all positive number is %d",sum);
}
