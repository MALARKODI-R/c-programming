// Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.
#include <stdio.h>
int main() {
    int a,sum=0;
    do{
        printf("enter a number: ");
        scanf("%d",&a);
        if(a>=0){
            sum=sum+a;
        }
        else{
            printf("Enter valid number!!");
        }
    }while(a!=0);
    printf("Sum=%d",sum);
    printf("\n");
}
