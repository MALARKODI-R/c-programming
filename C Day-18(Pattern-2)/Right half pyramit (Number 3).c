//Right half pyramid
#include <stdio.h>
int main() {
    int a,i,j,b=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d ",b++);
        }printf("\n");
    }
}
