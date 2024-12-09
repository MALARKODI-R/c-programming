// Calculate simple interest
#include <stdio.h>
int main() {
    int p=100,t=2,r=30,si,amount;
    si=(p*r*t)/100;
    amount=si+p;
    printf("The simple interest and amount is :%d %d",si,amount);
}
