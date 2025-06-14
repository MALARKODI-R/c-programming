// Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
int main() {
    char a[]="Electronics";
    char b[]="Engineer";
    int lena=sizeof(a);
    int lenb=sizeof(b);
    if(lena==lenb){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
}
