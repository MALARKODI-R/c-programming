// Write a C program that reads two integers and checks whether they are multiplied or not.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);

    if(a%b==0 || b%a==0){
        printf("Multiplied!");
    }
    else{
        printf("Not multiplied!");
    }
}
