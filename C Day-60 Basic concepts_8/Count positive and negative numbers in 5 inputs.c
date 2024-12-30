//Count positive and negative numbers in 5 inputs
#include <stdio.h>
int main() {
    int a[5],positive=0,negative=0,zero=0;
    printf("Enter 5 numbers(both posive and negative):");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;i++){
        if(a[i]>0){
            positive++;
        }
        else if(a[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }printf("The positive numbers are %d\n",positive);
    printf("The negative numbers are %d\n",negative);
    printf("The zero numbers are %d\n",zero);
}
