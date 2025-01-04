/*Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.*/
#include <stdio.h>
int main() {
    int a[5],i,position;
    printf("Enter elements of array: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements in the arrays are:\n");
    for(i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&position);
    if((position>0) && (position<5))
        printf("a[%d]=%d\n",position,a[position]);
    else
        printf("Enter valid index!!");

}
