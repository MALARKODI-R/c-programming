#include<stdio.h>
int main(){
    int i=0,j=0,k=0;
    int a[3][3][3]={{{0}}};
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("%d ", a[i][j][k]);
            }printf("\n");
        }printf("\n");
}
}
