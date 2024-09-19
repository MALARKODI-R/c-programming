// Program to print if it is an armstrong number or not
#include <stdio.h>
int main() {
    int a,b,c,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        c=a%10;
        sum=sum+(c*c*c);
        a/=10;
    }
    if(b==sum){
        printf("%d is an armstrong number",b);}
    else{
        printf("%d is not an armstrong number",b);
    }
}
