// Sum of 2 matrices
#include <stdio.h>
int main() {
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{11,12,13},{14,15,16}};
    int i=0,j=0,sum[2][3];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
}printf("\n");
for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }}
for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }printf("\n");
}
}
