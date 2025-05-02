/*Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9*/
#include <stdio.h>

int main() {
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);

    int a[size];
    printf("Input %d elements in the array:\n", size);
    for(int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
