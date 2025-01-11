//Print squares and cubes of numbers from 0 to 20
#include <stdio.h>
int main() {
    int square,cube;
    for(int i=0;i<=20;i++){
        square=i*i;
        cube=i*i*i;
        printf("%d %d %d \n",i,square,cube);
    }
}
