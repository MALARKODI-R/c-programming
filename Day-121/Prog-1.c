/* Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10 */
#include <stdio.h>

int main() {
    int size,a[size+1],pos,insert;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input 4 elements in the array in ascending order:\n ");
    for(int i=0;i<size;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d",&insert);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d",&pos);
    printf("The current list of the array : ");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }printf("\n");
     if(pos<0 || pos>size) {
        printf("Invalid position!\n");
        return 1;
    }
    for(int i=size;i>pos;i--) {
        a[i]=a[i-1];
    }
    a[pos]=insert;
    size++;
    printf("After Insert the element the new list is :");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
    return 0;
}
