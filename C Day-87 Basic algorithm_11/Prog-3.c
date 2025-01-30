//Write a C program to check whether an array of integers with a length of 2 contains 15 or 20
#include <stdio.h>

int main() {
    int a[2];
    int found=0;

    printf("Enter elements of array a: ");
    for(int i=0;i<2;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<2;i++){
        if(a[i]==15 || a[i]==20){
            found=1;
        }
    }

    if(found)
      printf("True");
    else
      printf("False");
}
