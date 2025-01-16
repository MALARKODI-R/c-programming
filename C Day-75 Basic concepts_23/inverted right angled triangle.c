// inverted right angled triangle
#include <stdio.h>
int main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    for(int i=a;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }printf("\n");
    }
}
