//Simple interest
#include <stdio.h>
int main() {
    float s,p,r,t;
    printf("Enter p,r,t: ");
    scanf("%f %f %f",&p,&r,&t);
    s=(p*r*t)/100;
    printf("Simple interest:%f",s);
}
