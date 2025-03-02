//Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops
#include <stdio.h>

int main() {
    int i=1,sumo=0,sume=0;
    do{
        if(i%2==0){
            sume=sume+i;}
        else{
            sumo=sumo+i;
        }
        i++;
    }while(i<=50);
    printf("Sum of even:%d\n",sume);
    printf("Sum of odd:%d",sumo);
}
