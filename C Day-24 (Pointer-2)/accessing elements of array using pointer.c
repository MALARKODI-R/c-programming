// access elements of array using pointer
#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int i,*ptr;
    ptr=arr;
    for(i=0;i<=4;i++){
        printf("%d ",*(ptr+i));
    }
}
