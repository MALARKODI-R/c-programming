//To print an elements from user using array
#include <stdio.h>
int main() {
    int i;
    int arr[5];
    printf("Enter 5 elements of an array\n");
    for(i=0;i<5;i++){
        printf("element-%d =",i);
        scanf("%d", &arr[i]);
    }
    printf("elements in the array are");
    for(i=0;i<5;i++){
         printf("\n%d", arr[i]);
    }
}
