//Write a program in C to copy the elements of one array into another array
#include <stdio.h>

int main() {
    char a[5]={3,2,5,1,7},b[5];
    printf("The copied arry is: ");
    for(int i=0;i<5;i++){
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}
