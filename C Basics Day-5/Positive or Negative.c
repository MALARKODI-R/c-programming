//Positive or negative
#include <stdio.h>
int main() {
    float a;
    printf("Enter an number: ");
    scanf("%f",&a);
    if(a>=0){
        printf("%f is positive",a);
    }
    else if(a==0){
        printf("%f is zero",a);
    }
    else{
        printf("%f is negative",a);
    }
}
