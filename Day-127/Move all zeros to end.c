// Move All Zeroes To End
#include <stdio.h>
int main() {
    int a[10]={3,6,1,0,3,2,0,6,0,1};
    int j=0;
    for(int i=0;i<10;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    while(j<10){
        a[j]=0;
        j++;
    }
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
}
