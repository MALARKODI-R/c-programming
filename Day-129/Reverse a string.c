#include <stdio.h>
int main() {
    char a[3]={'a','b','c'};
    for(int i=2;i>=0;i--){
        printf("%c ",a[i]);
    }
    return 0;
}
