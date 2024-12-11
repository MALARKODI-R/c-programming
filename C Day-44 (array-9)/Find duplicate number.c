#include <stdio.h>
int main() {
    int numbers[16] = {1, 2, 8, 2, 2, 3, 4, 5, 6, 7, 7, 7, 1, 8, 9, 6};
    int i, j;
    int Duplicate;
    printf("Duplicate values are: ");
    for(i = 0; i < 16; i++) {
        Duplicate = 0;
        for(j = 0; j < i; j++) {
            if(numbers[i] == numbers[j]) {
                Duplicate = 1;
                break;
            }
        }
        if(Duplicate == 0) {
            for(j = i + 1; j < 16; j++) {
                if(numbers[i] == numbers[j]) {
                    printf("%d ", numbers[i]);
                    break;
                }
            }
        }
    }
}
