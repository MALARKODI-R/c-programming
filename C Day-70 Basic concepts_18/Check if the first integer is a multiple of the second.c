//Check if the first integer is a multiple of the second
#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    if(num1%num2==0){
        printf("%d is the multiple of %d",num1,num2);
    }
    else
    printf("%d is not the multiple of %d",num1,num2);
}
