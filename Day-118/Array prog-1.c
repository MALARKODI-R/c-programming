/*Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47*/
#include <stdio.h>
int main() {
    int num;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &num);
    int org[num], even[num], odd[num], ecount = 0, ocount = 0;
    printf("Input %d elements in the array :\n", num);
    for (int i = 0; i < num; i++) {
        printf("element - %d : ", i);
        scanf("%d", &org[i]);
        if (org[i] % 2 == 0) {
            even[ecount++] = org[i];
        } else {
            odd[ocount++] = org[i];
        }
    }
    printf("The Even elements are :\n");
    for (int i = 0; i < ecount; i++) {
        printf("%d ", even[i]);
    }printf("\n");
    printf("The Odd elements are :\n");
    for (int i = 0; i < ocount; i++) {
        printf("%d ", odd[i]);
    }printf("\n");
}
