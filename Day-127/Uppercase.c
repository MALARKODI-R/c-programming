//Convert String to Uppercase
#include<stdio.h>
#include<ctype.h>
int main(){
    char a[10]="Engineer";
    char b[10];
    for( int i=0;i<10;i++){
        b[i]=toupper(a[i]);
    }
    printf("%s",b);
}
