// Write a program in C to store elements in an array and print them
#include <stdio.h>

int main() {
    int a[10],i;
    for(i=0;i<10;i++){
        printf("enter number: ");
        scanf("%d",&a[i]);
    }
    printf("The entered numbers are: ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
