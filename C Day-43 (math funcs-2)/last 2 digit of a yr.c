//to Find the last 2 digit of the year
#include <stdio.h>
 int main(){
    int yr,a;
    printf("Enter a year:");
    scanf("%d",&yr);
    a=yr%100;
    printf("last 2 digits of the year is %d",a);
}
