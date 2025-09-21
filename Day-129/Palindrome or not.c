#include <stdio.h>
#include<string.h>
int main() {
    char a[6]="33333";
    char b[6];
    for(int i = 4, j = 0; i >= 0; i--, j++){
            b[j]=a[i];
            printf("%c",b[j]);
    }printf("\n");
    if(strcmp(a,b)==0){
        printf("Palindrone");
    }
    else{
        printf("Not");
    }
    return 0;
}
