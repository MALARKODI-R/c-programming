// Write a C program that accepts two integers and checks whether either one of them is 5 or their sum or difference is 5. If any of these conditions are met, the program returns true. Otherwise, it returns false
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);

    int sum=a+b;

    if(((a==5) || (b==5)) || (sum==5))
        printf("True");
    else
        printf("False");
}
