//Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere
#include <stdio.h>
int main() {
    int a[3]={1,2,3};
    int b[10];

    printf("Enter elements of b: ");
    for(int i=0;i<10;i++){
    scanf("%d",&b[i]);
    }

    int found=0;
    for(int i=0;i<8;i++){
        if (b[i]==a[0] && b[i+1]==a[1] && b[i+2]==a[2]){
            found = 1;
            break;
        }
    }

    if(found)
        printf("The sequence appears in given array!!");
    else
        printf("The sequence does not appear in the given array!!");
}
