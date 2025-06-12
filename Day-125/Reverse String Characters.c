// Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
int main() {
    char a[]="MALARKODI";
    for(int i=sizeof(a);i>=0;i--){
        printf("%c ",a[i]);
    }
    return 0;
}
