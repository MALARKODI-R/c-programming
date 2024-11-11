//Merging two arrays
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int merge[10];
    for(int i=0;i<5;i++){
        merge[i]=a[i];
    }
    for(int i=0;i<5;i++){
        merge[i+5]=b[i];
    }
    for(int i=0;i<10;i++){
        printf("%d ",merge[i]);
    }
}
