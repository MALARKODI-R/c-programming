//Write a C program that checks two given temperatures and returns true if one temperature is less than 0 and the other is greater than 100, otherwise it returns false
#include <stdio.h>

int main() {
    float temp1,temp2;
    printf("Enter 2 temperatures: ");
    scanf("%f %f",&temp1,&temp2);

    if((temp1<0)&&(temp2>100) || (temp1>100)&&(temp2>0)){
        printf("True");
    }
    else{
        printf("False");
    }
}
