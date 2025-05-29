/* Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5 */
#include <stdio.h>

int main() {
    int size,del;
    printf("Input the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Input %d elements in the array in ascending order:\n",size);
    for(int i=0;i<size;i++){
         printf("element - %d :",i);
         scanf("%d",&a[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d",&del);
    if(del<0 || del>size){
        printf("Invalid position!!");
        return 1;
    }
    for(int i=del-1;i<size-1;i++){
         a[i]=a[i+1];
    }size--;
    printf("The new list is : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
