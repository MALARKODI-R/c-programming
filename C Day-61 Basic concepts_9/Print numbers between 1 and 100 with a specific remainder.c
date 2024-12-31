//C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
#include <stdio.h>
int main() {
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=100;i++){
        if(i%a==3){
            result=i;
            printf("%d\n",result);
        }
    }
}
