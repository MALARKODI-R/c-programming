// to modify 2D array elements
#include <stdio.h>
int main() {
    int i,j;
    int a[2][3]={{10,20,30},{40,50,60}};
    a[0][0]=40;
    a[1][0]=10;
    printf("2D array:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
