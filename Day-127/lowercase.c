//Convert String to Uppercase
#include<stdio.h>
#include<ctype.h>
int main(){
    char a[10]="ENGINEER";
    char b[10];
    for( int i=0;i<10;i++){
        b[i]=tolower(a[i]);
    }
    printf("%s",b);
}
