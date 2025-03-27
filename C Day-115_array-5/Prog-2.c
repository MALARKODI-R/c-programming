 /*Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21*/
#include <stdio.h>

int main() {
    int arr[3] = {45, 25, 21};
    int min, max;
    min = max = arr[0];
    for(int i = 1; i < 3; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
}


