#include <stdio.h>
int main() {
    int a[3][3][3];
    int i, j, k;
    printf("Enter the elements of the 3D array (3x3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("Enter element for a[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("\nThe elements in the 3D array are:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
