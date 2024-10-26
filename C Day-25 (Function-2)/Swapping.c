// Swapping two numbers using function
#include <stdio.h>
int swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return c;
}
int main() {
    int x,y,z;
    x=20;
    y=56;
    swap(&x,&y);
    printf("%d %d",x,y);
}
