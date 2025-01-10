// Display alphabet letters with their ASCII codes
#include <stdio.h>
int main() {
    for(int i=65;i<=90;i++){
        printf("[%c-%d] ",i,i);
    }printf("\n");
    for(int j=97;j<=122;j++){
        printf("[%c-%d] ",j,j);
    }
}
