#include <stdio.h>
int main() {
    int a[10]={1,1};
    //int a[0]=1,a[1]=1;
    printf("%d %d ",a[0],a[1]);
    for(int i=0;i<8;i++){
        a[i+2]=a[i]+a[i+1];
        printf("%d ",a[i+2]);
    }
    return 0;
}
