// Sorting elements of an array
#include <stdio.h>
int main() {
    int sort,i,j;
    int a[10]={23,74,13,46,869,55,24,8,47,23};
    for(i=0;i<=9;i++){
        for(j=i+1;j<=9;j++){
            if(a[i]>a[j]){
               sort=a[i];
               a[i]=a[j];
               a[j]=sort;
            }

        }
    }
    printf("After sorting\n");
    for(i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
}
