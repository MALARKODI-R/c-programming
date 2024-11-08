// Deleting element from array by value
#include <stdio.h>
int main() {
    int element,found=0,position,i;// declare the deleting element
    int a[5]={1,2,3,4,5};
    printf("Enter the element to be deleted: ");
    scanf("%d",&element);
    for(i=0;i<5;i++){
        if (a[i] == element){
            found=1;
            position=i;
            break;
        }
    }
    if(found==1){
        for(i=position;i<4;i++){
            a[i]=a[i+1];
        }
        printf("After deleting the element: ");
        for(i=0;i<4;i++){
            printf("%d",a[i]);
        }
    }
    }
