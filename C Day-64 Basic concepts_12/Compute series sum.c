//Compute series sum S=1+1/2+1/3+...+1/50
#include <stdio.h>
int main() {
    int a,i;
    float s=0;
    for(i=1;i<=50;i++){
        s=s+(float)1/i;
    }
    printf("the value of S is %f",s);
}
