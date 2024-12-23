/*Reverse characters ('X', 'M', 'L')
Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX */
#include<stdio.h>
int main(){
    char a[3]={'X','M','L'};
    printf("The reverse of XML is ");
    for(int i=2;i>=0;i--){
         printf("%c",a[i]);
    }
}
