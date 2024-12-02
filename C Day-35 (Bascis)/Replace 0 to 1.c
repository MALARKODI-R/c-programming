// Replacing 0 to 1
#include <math.h>
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int ans = 0;
    int i = 0;
    while (N != 0) {
        if (N % 10 == 0)
            ans = ans + 1 * pow(10, i);
        else
            ans = ans + (N % 10) * pow(10, i);

        N = N / 10;
        i++;
    }
    printf("%d", ans);
}
