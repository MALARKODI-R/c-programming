//Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
#include <stdio.h>
int main() {
    int a,b,sum=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    if(a<b)
    return 0;

    printf("The list of odd numbers:");
    for (int i=b;i<=a;i++){
    if((i%2)!=0){
        printf("%d\n",i);
        sum=sum+i;
        }
    }
    printf("The sum=%d ",sum);
}
