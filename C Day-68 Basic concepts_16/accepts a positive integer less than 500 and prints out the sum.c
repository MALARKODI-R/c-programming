//Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
#include <stdio.h>
int main() {
    int x,sum=0;
    printf("Enter positive number x: ");
    scanf("%d",&x);

    if(x>0 && x<500){
    for(int i=0;x!=0;i++){
        sum=sum+(x%10);
        x=x/10;
    }
    printf("%d",sum);
    }

    else{
        if(x<0)
        printf("Enter positive integer!!");
        else
        printf("Enter number less than 500!!");
    }
}
