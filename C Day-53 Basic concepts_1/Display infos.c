/*Write a C program to print your name, date of birth, and mobile number.
Expected Output:
Name   : Alexandra Abramov
DOB    : July 14, 1975
Mobile : 99-9999999999*/
#include<stdio.h>
int main(){
    char name[20]="Alexandra Abramov";
    char month[10]="july";
    int date=14,yr=1975;
    char mobile[15]= "99-999999999";
    printf("Name   :%s\n",name);
    printf("DOB    :%s %d,%d\n",month,date,yr);
    printf("Mobile :%s",mobile);
}
