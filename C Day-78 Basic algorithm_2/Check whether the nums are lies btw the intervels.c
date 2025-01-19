//Write a C program that checks if two given integers are in the range of 40 to 50 inclusive, or if they are both in the range of 50 to 60 inclusive

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);

    if(a>40 && a<50 && b>40 && b<50 || a>50 && a<60 && b>50 && b<60){
        printf("True");
    }
    else{
        printf("False");
    }
}
