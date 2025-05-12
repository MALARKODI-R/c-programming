/* Sort Array Descending

Write a program in C to sort the elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1*/

#include <stdio.h>
int main() {
    int size;
    printf("input the size of array: ");
    scanf("%d",&size);

    int a[size];
    printf("Input %d elements in the array: ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[i]<a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    }printf("Elements of the array in sorted descending order: ");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}
