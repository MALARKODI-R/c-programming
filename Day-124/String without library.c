//String Length Without Library
#include <stdio.h>
int main() {
    char a[15]="Cprogramming";
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    printf("%d",len);
}
