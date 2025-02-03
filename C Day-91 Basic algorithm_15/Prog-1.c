//Write a C program to find the largest value from the first, last, and middle elements of a given array of integers of odd length (at least 1)
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int first,mid,last;
    int size=sizeof(a)/sizeof(a[0]);
    first=a[0];
    mid=a[size/2];
    last=a[size-1];
    printf("%d %d %d\n",first,mid,last);
    if(first>mid && first>last){
    printf("The largest number is %d",first);}
    else if(mid>first && mid>last){
    printf("The largest number is %d",mid);}
    else{
    printf("The largest number is %d",last);}
}
