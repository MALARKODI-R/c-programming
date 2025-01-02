//Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 integer: ");
    scanf("%d %d",&a,&b);

    for(int i=a;i<b;i++){
        if((i%7==2) || (i%7==3)){
            printf("%d\n",i);
        }
    }
}
