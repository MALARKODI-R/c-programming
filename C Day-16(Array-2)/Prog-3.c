//To modify and print an elements using array
#include <stdio.h>
int main() {
    int i;
    int arr[5];
    printf("Enter 5 elements of an array\n");
    for(i=0;i<5;i++){
        printf("element-%d =",i);
        scanf("%d", &arr[i]);
    }
    arr[4]=100;arr[0]=13;
    printf("elements in the array are");
    for(i=0;i<5;i++){
         printf("\n%d", arr[i]);
    }
}
