//Inserting elements in an array
#include <stdio.h>
int main() {
    int i, position, n = 8;
    int x;
    int a[100] = {2, 45, 21, 65, 85, 25, 53, 78};
    for (i = 0; i <= 7; i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter new element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position of the element (1 to %d): ", n + 1);
    scanf("%d", &position);
    if (position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1;
    }
    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }
    a[position - 1] = x;
    n++;
    printf("Updated array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
