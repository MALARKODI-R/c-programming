// Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
#include <stdio.h>
int main() {
    char* month[12]={"Jan","Feb","March","April","May","June","July","Aug","Sep","Oct","Nov","Dec"};
    int a;
    char Month;
    printf("Enter the month in number: ");
    scanf("%d",&a);
        if(a>=1 && a<=12){
            printf("The month is %s",month[a-1]);
        }
        else{
            printf("Enter valid month in number");
        }
 }
