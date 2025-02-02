// Write a C program to create an array of length 3 from a given array (length at least 3) containing the elements from the middle of the array
#include <stdio.h>

int main() {
    int a[6];
    int arr[3];

    printf("Enter elements for the array: ", a[6]);
    for (int i = 0; i < 6; i++)
            scanf("%d", &a[i]);

    arr[0] = a[6 / 2 - 1 ];
    arr[1] = a[6 / 2];
    arr[2] = a[6 / 2 + 1];
    printf("The three middle elements are: %d %d and %d\n", arr[0], arr[1], arr[2]);
}
