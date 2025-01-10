//Write a C program that prints the powers of 2 table for the powers 0 to 10, both positive and negative
#include <stdio.h>
#include <math.h>
int main() {
    int positive;
    float negative;
    for(int i=0;i<=10;i++){
       positive=pow(2,i);
       negative=1/pow(2,i);
       printf("%d %d %f\n",i,positive,negative);
    }
}
