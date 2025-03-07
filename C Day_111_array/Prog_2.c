// Write a program in C to read n number of values in an array and display them in reverse order
#include <stdio.h>

int main() {
    int num;
    printf("enter the number of elements: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter the elements: ");
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("The entered elements are: ");
    for(int i=num-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
