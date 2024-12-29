// Write a C program that reads 5 numbers and sums all odd values between them.
#include <stdio.h>
int main() {
    char a[5];
    int i,sum=0;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<=4;i++){
        if(a[i]%2!=0){
            sum=sum+a[i];
        }
    }printf("%d",sum);
    return 0;
}
