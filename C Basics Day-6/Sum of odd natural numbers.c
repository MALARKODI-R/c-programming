//To print odd natural numbers and their sum
#include <stdio.h>
int main() {
    int a,i,sum=0;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i%2!=0){
            sum=sum+i;
            printf("%d \n",i);
        }
    }printf("The sum of natural numbers is:%d",sum);
}
