// Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
#include <stdio.h>

int main() {
    char a[6]={1,2,3,4,5,6};
    printf("The reversed array is:\n");

    for(int i=5;i>=0;i--){
        printf("%d ",a[i]);
    }
}
