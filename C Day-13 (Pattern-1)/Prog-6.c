//Star pattern of Right angle triangle-6
#include <stdio.h>
int main() {
    int i,j,a=65;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%c ",a++);
        }
        printf("\n");
    }
}
