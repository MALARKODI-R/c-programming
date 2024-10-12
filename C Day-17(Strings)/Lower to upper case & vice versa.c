//Replace lower case to upper case and vice versa
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char a[20]="I Am A Student";
    int i;
    for(i=0;i<=15;i++){
        if(islower(a[i])){
            a[i]=toupper(a[i]);
        }else if(isupper(a[i])){
            a[i]=tolower(a[i]);
    }}
    printf("The modified string is %s",a);
}
