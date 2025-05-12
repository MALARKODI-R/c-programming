/*Insert in Sorted Array

Write a program in C to insert the values in the array (sorted list).
Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 3
element - 2 : 4
element - 3 : 7
element - 4 : 8
Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8 */

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
            if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    }printf("The existing array list is : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }int newno,pos;
    printf("\nInput the value to be inserted: ");
    scanf("%d ",&newno);
    for( pos=0;pos<size;pos++){
        if(newno < a[pos]){
           break;
        }
    }
    for(int i=size;i>pos;i--) {
        a[i]=a[i-1];
    }
    a[pos] = newno;
    size++;printf("After Insert the list is : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
