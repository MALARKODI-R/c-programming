//Leap or not
#include <stdio.h>
int main() {
    int leap;
    printf("Enter a year: ");
    scanf("%d",&leap);
    if((leap%4==0)||(leap%400==0)){
        printf("%d is leap year",leap);
    }
    else{
        printf("%d is non-leap year",leap);
    }
}
