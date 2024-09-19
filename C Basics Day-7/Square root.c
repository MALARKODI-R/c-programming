// Program to print the squareroot of the given range
#include <stdio.h>
#include<math.h>
int main() {
    int a,i;
    float b;
    printf("Enter the range: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=sqrt(i);
        printf("The square root of %d is:%.2f\n",i,b);
    }
}
