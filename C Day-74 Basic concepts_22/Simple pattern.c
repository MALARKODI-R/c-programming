//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character
#include <stdio.h>

int main() {
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    if(x>0 && x<=10){
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                printf("# ");
            }
            printf("\n");
        }
    }

    else{
        printf("Enter number between 1 and 10!!");
    }
}
