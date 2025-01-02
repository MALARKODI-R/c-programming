//Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
#include <stdio.h>
int main() {
    int a[7];
    printf("Enter elements of an array of length 7: ");

    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<7;i++){
        if((a[i]<0) || (a[i]==0)){
            a[i]=100;
            printf("%d\n",a[i]);}
        else{
            printf("%d\n",a[i]);}
    }
}
