#include <stdio.h>
#include <string.h>
int main() {
    char a[5]="1234";
    char b[5];
    printf("enter a password: ");
    scanf("%s",b);
   if(strcmp(a,b)==0){
       printf("Password is correct!!");
   }
   else{
       printf("Try again!!");
   }
    return 0;
}
