//Compound interest
#include <stdio.h>
#include<math.h>//for using pow function
int main() {
    double a,c,p,r,t;
    printf("Enter p,r,t:");
    scanf("%lf %lf %lf",&p,&r,&t);
    a= p * ((pow((1 + r / 100),t)));
    c = a- p;
    printf("Compound interest:%lf",c);
}
