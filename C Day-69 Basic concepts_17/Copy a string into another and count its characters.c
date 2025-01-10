// Copy a string into another and count its characters
#include <stdio.h>
#include <string.h>
int main() {
    char a[20]="Electronic engineer";
    char b[20];
    strcpy(b,a);
    printf("%s\n",b);
    int count=0;
    for(int i=0;b[i]!='\0';i++){
        count++;
    }printf("%d",count);
}
