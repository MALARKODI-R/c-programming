//Generate a table with x,x+2,x+4 using loops
#include <stdio.h>

int main() {
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    for(int i=0;i<3;i++){
        printf("%d %d %d\n",x,x+2,x+4);
        x=x+4;
    }
}
