#include <stdio.h>
int main() {
    int sum=0;
    for(int i=10;i<=20;i++){
        if(i%17!=0){
            sum=sum+i;
        }
    }printf("%d",sum);
    return 0;
}
