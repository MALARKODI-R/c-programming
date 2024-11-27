// To print 3D array elements
#include <stdio.h>
int main() {
    int i,j,k;
    int a[3][3][3]={
        {{10,20,30},{40,50,60},{70,80,90}},
        {{28,67,45},{56,98,62},{56,98,79}},
        {{53,61,85},{96,48,05},{53,81,69}}
        };
    printf("2D array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
            printf("%d ",a[i][j][k]);
        }
        printf("\n");
    }printf("\n");
    }
}
