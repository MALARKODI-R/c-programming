// Program to print reverse of the number
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }printf("The Reversed number is %d",c);
}
