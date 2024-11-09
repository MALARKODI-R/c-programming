// Seperate even and odd numbers
#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10},oddarr[10],evenarr[10];
    int i,j=0,k=0;
    for(i=0;i<=9;i++){
        if(a[i]%2==0){
            evenarr[j]=a[i];
            j++;
        }
        else{
            oddarr[k]=a[i];
            k++;
        }
    }printf("The even elements in the array are:\n");
    for(i=0;i<j;i++){
        printf("%d ",evenarr[i]);
    }printf("\nThe odd elements in the array are:\n");
    for(i=0;i<k;i++){
        printf("%d ",oddarr[i]);
    }
}
