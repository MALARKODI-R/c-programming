// Calculate EMI
#include <stdio.h>
#include <math.h>
int main() {
    float p,r,t;
    float EMI;
    printf("Enter p,t &r:");
    scanf("%f %f %f",&p,&t,&r);
    r=r/(12*100);
    t=t*12;
    EMI=(p*r*pow(1+r,t))/(pow(1+r,t)-1);
    printf("The EMI is:%f ",EMI);
}
