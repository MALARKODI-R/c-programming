// Reversing the elements of array
#include <stdio.h>
int main() {
    int a[]={2,5,3};
    printf("Before reversing ");
    for(int i=0;i<=2;i++){
        printf(" %d",a[i]);
    }printf("\n");
    printf("After reversing");
    for(int i=2;i>=0;i--){
        printf(" %d",a[i]);
    }
}
