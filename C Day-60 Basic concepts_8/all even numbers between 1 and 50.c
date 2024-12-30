//Write a C program that prints all even numbers between 1 and 50 (inclusive).
#include <stdio.h>
int main() {
    printf("The even numbers are:\n");
    for(int i=1;i<=50;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
