// Add two numbers using function
#include <stdio.h>
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main() {
    int x=4,y=7,z;
    z=add(x,y);
    printf("%d",z);
}
