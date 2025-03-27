 /*Frequency of Array Elements

Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times*/
#include <stdio.h>
int main() {
    int arr[6] = {1, 3, 5, 3, 2, 1};
    int count=1;
    printf("The frequency of all elements of an array:\n");
    for (int i = 0; i < 6; i++) {
        if (arr[i] == -1) {
            continue;
        }
        for (int j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}
