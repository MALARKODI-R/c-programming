//Average
#include <stdio.h>
void average(int a,int b,int c,int d,int e){
    float x;
    x=(float)(a+b+c+d+e)/5;
    printf("%f ",x);
}
int main() {
   int a=2,b=5,c=8,d=2,e=9;
   average(a,b,c,d,e);
}
