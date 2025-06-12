// Write a program in C to separate individual characters from a string
#include <stdio.h>
int main() {
    char a[]="MALARKODI";
    for(int i=0;i<sizeof(a);i++){
        printf("%c ",a[i]);
    }
    return 0;
}
