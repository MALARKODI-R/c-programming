//Write a C program to check if an array of integers with length 2 does not contain 15 or 20
#include <stdio.h>

int main() {
    int a[2];
    int found=1;

    printf("Enter elements of array a: ");
    for(int i=0;i<2;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<2;i++){
        if(a[i]==15 || a[i]==20){
            found=0;
        }
    }

    if(found)
      printf("True");
    else
      printf("False");
}
