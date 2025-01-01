//Divide two numbers or print if division isn't possible
#include <stdio.h>

int main() {
    int num1,num2;
    float result;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    if(num2!=0){
        result=num1/num2;
        printf("%f",result);
    }

    else{
        printf("Division not possible");
    }
}
