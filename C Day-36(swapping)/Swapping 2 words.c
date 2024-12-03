//Swapping 2 words
#include <stdio.h>
#include <string.h>
int main() {
    char a[20]="Mango",b[20]="tree",c[20];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("After swapping:\n");
    printf("%s\n",a);
    printf("%s\n",b);
}
