// Compute simple interest
#include <stdio.h>
int main() {
    int days;
    float principal,rate,interest;
    printf("Enter principal ,rate and days: ");
    scanf("%f %f %d",&principal,&rate,&days);
    interest= (principal * rate * days) / 365;
    printf("The interest is:%f",interest);
}
