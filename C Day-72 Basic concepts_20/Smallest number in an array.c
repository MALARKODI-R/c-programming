// Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.
#include <stdio.h>
#include <limits.h>
int main() {
    int a[3];
    printf("enter the elements of array(only positive): ");
    for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
    int smallest=INT_MAX;
    if(a>0){
        for(int i=0;i<3;i++){
            if(a[i]<smallest){
               smallest=a[i];
            }
        }printf("%d is smallest",smallest);
    }
    else{
        printf("Enter positive integer!!");
    }
}
