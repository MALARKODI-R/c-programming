// Program to print fibonacci numbers greater than or equal to 10
#include <stdio.h>
int main() {
    int a=0,b=1,c,i;
    printf("%d\n%d\n",a,b);
    for(i=0;i<=10;i++){
        c=a+b;
        printf("%d \n",c);
        a=b;
        b=c;
    }
}
