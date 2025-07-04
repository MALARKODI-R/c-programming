#include <stdio.h>
int main() {
    int arr[2][2], transposed[2][2];
    printf("Enter the numbers for a 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    printf("\nThe Original 2x2 Matrix is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transposed 2x2 Matrix is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}
