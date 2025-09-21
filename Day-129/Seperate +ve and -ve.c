#include <stdio.h>
int main() {
    int a[5]={4,-2,9,-6,1};
   int cp=0,cn=0;
    for(int i=0;i<5;i++){
        if(a[i]>=0){
           cp++;
        }
        else {
            cn++;
        }
    }
    printf("%d %d",cp,cn);
    return 0;
}
