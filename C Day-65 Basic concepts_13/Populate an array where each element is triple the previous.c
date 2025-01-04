/* Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162*/
#include <stdio.h>
int main() {
    int a[5],i,result;
    printf("Enter first element of array: ");
    scanf("%d",&result);

    for(i=0;i<5;i++){
        a[i]=result;
        result=3*result;
    }

    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
