//Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2
#include <stdio.h>
int main() {
    char a[9]="abcdefgh";
    char rev;
    int n1,n2;

    printf("Enter the interval which you want to change: ");
    scanf("%d %d",&n1,&n2);

    for(int i=0;n1<n2;i++){
        rev=a[n1];
        a[n1]=a[n2];
        a[n2]=rev;
        n1++;
        n2--;
    }
    printf("%s",a);
}
