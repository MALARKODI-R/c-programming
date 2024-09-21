#include <stdio.h>
#include <string.h>
int main() {
    char a1[7]="aabbcc";
    char a2[7]="aabbcc";
    int result=strcmp(a1,a2);
    if(result==0){
        printf("String is equal");
    }
    else{
        printf("string is not equal");
    }
}
