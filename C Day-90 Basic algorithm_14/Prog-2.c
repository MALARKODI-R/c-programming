//Write a C program to count the even number of elements in a given array of integers
#include <stdio.h>

int main() {
    int a[6],count=0,result;

    printf("Enter elements for the array: ", a[6]);
    for (int i = 0; i < 6; i++)
            scanf("%d", &a[i]);

    for(int i=0;i<=6;i++){
        if(a[i] % 2==0){
            result=count++;
        }
    }printf("%d",result);
}
