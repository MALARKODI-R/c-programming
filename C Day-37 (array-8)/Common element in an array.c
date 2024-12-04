// Find common number in an array
#include <stdio.h>
int main() {
    int a[5]={4,3,2,4,4};
    int common=a[0];
    for (int i=0;i<=4;i++){
        if(a[i]==common){
            common=a[i];
        }
    }printf("the common element in the given array is %d",common);
}
