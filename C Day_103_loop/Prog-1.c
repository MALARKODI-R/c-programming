// Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops
#include <stdio.h>

int main() {
    int a=10;
    for(int i=0;i<=a;i++){
        printf("%d ",i);
    }printf("\n");
    for(int j=a;j>=0;j--){
        printf("%d ",j);
    }
}
