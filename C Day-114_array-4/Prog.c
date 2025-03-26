/*Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[3], b[3], c[6];
    printf("Input the number of elements to be stored in the first array : 3\n");
    printf("Input 3 elements in the array:\n");
    for (int i = 0; i < 3; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Input the number of elements to be stored in the second array : 3\n");
    printf("Input 3 elements in the array:\n");
    for (int i = 0; i < 3; i++) {
        printf("element - %d : ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++) {
        c[i] = a[i];
        c[i+3] = b[i];
    }
    bubbleSort(c, 6);
    printf("The merged array in descending order is:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }
}
