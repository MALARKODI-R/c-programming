//Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is the same.
#include <stdio.h>

int main() {
    int small,med,large;
    printf("Enter small medium and large value: ");
    scanf("%d %d %d",&small,&med,&large);

    if(med-small == large-med)
        printf("difference is the same");
    else
        printf("difference isn't the same");
}
