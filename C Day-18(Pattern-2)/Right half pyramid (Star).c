//Right half pyramid
#include <stdio.h>
int main() {
    int a,i,j;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }printf("\n");
    }
}
