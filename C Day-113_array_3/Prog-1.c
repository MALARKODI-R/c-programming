//Write a program in C to find the sum of all elements of the array
#include <stdio.h>

int main() {
    char a[5]={3,2,5,1,7};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("The sum =%d",sum);
}
