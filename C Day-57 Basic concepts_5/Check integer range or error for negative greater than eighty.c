/*Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
    Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a>0 && a<20)
        printf("\n %d is in the Range=[0,20]");

    else if(a>21 && a<40)
        printf("\n %d is in the Range=[21,40]");

    else if(a>41 && a<60)
        printf("\n %d is in the Range=[41,60]");

    else if(a>61 && a<80)
        printf("\n %d is in the Range=[61,80]");

    else
        printf("\n The entered number is greater than 80");
}
