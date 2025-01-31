//Write a C program to create an array taking two middle elements from a given array of integers of length even
#include <stdio.h>

int main() {
    int len, mid1, mid2;
    int arr[len];

    printf("Enter the length of array (even number): ");
    scanf("%d", &len);

    printf("Enter %d elements for the array: ", len);
    if (len % 2 == 0) {
        for (int i = 0; i < len; i++) {
            scanf("%d", &arr[i]);
        }
        mid1 = arr[len / 2 - 1];
        mid2 = arr[len / 2];
        printf("The two middle elements are: %d and %d\n", mid1, mid2);
    } else {
        printf("The length of the array must be an even number.\n");
    }
}
