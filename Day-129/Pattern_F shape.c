#include <stdio.h>
int main() {
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==5/2){
                printf("#");
            }
            else if(j==0){
                printf("#");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}
