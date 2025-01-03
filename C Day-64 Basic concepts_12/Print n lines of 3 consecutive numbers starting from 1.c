//Print n lines of 3 consecutive numbers starting from 1
#include <stdio.h>
int main() {
    int n,num=1;
    printf("Enter a number up to which you want: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        if (num > n) break;
    }
}
