//Cube of a number upto an integer
#include <stdio.h>
int main() {
    int a,i,b;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
         b=i*i*i;
         printf("%d \n",b);
    }
}
