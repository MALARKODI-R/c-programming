#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "86219.AR@gmail.com";
    int digits = 0, upper = 0, lower = 0, special = 0;
    char specials[] = {',', '.', '@', '!', '#', '$', '%', '&'};
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            digits++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            upper++;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            lower++;
        } else {
            for (int j = 0; j < sizeof(specials); j++) {
                if (a[i] == specials[j]) {
                    special++;
                    break;
                }
            }
        }
    }
    printf("Digits: %d\n", digits);
    printf("Uppercase Letters: %d\n", upper);
    printf("Lowercase Letters: %d\n", lower);
    printf("Special Characters: %d\n", special);
}
