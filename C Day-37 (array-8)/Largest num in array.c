// Largest number in an array
#include <stdio.h>
int main() {
    int largest_num;
    int a[7]={1,2,8,2,3,4,2};
    largest_num=a[0];
    for(int i=1;i<=sizeof(a)/sizeof(a[0]);i++){
        if(a[i]>largest_num){
            largest_num=a[i];
        }
    }printf("The largest no is %d",largest_num);
}
