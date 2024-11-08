// Deleting element from array by index
#include <stdio.h>
int main() {
    int d,i;// declare the deleting element
    int a[5]={1,2,3,4,5};
    printf("Enter the index of deleting element: ");
    scanf("%d",&d);
    if(d<0 || d>5){
        printf("Deleting is not possible");
    }
    else{
        for(i=d;i<4;i++){
            a[i]=a[i+1];}
            printf("Array after deleting element: ");
            for(i=0;i<4;i++){
                printf("%d",a[i]);
            }
        }
    }
