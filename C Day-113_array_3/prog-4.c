//Write a program in C to print all unique elements in an array
#include <stdio.h>

int main() {
    char a[5]={1,2,3,3,7};
    for(int i=0;i<5;i++){
        int unique=1;
            for(int j=0;j<5;j++){
                if(i!=j&&a[i]==a[j]){
                    unique=0;
                    break;
                }
            }
            if(unique){
        printf("%d ",a[i]);
            }
    }
}
