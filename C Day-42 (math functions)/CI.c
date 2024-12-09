// Calculate compound interest
#include <stdio.h>
#include <math.h>
int main() {
    int p=5000,t=2,r=10;
    double ci,tot_amount;
    tot_amount=p*pow((1+(r/100.0)),t);
    ci=tot_amount-p;
    printf("The compound interest and total amount is :%.2f %.2f ",ci,tot_amount);
}
