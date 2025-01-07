//Evaluate y=xn
#include <stdio.h>
#include <math.h>
int main() {
    int x,y,n;
    printf("Enter the value of x and n: ");
    scanf("%d %d",&x,&n);

    y=pow(x,n);
    printf("%d",y);
}
