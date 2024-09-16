// Program to print largest of 3 numbers
#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enetr 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(d=(a>b)&&(a>c)){
        printf("%d is greater",a);
    }
    else if (e=(b>c)&&(b>a)){
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
}
