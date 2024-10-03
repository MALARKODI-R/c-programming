//Star pattern of Right angle triangle-3
#include <stdio.h>
int main() {
    int i,j,a=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a++);
        }
        printf("\n");
    }
}
