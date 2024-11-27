// to print 3D array elements dynamically
#include <stdio.h>
int main() {
    int i,j,k,value=1;
    int a[3][3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
           a[i][j][k]=value;
           value++;
        }
    }
    }
    printf("3D array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
            printf("%d ",a[i][j][k]);
        }
        printf("\n");
    }printf("\n");
    }
}
