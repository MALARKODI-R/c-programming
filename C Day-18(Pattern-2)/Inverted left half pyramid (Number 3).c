//Inverted Left half pyramid
#include <stdio.h>
int main() {
    int a,i,j,k,b=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a;j>=2*(a-i)-1;j--){
            printf(" ");}
                for(k=a;k>=i;k--){
                    printf("%d ",b++);}
                printf("\n");
        }
    }
