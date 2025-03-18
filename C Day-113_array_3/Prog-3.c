//Write a program in C to count the total number of duplicate elements in an array
#include <stdio.h>

int main() {
    char a[5]={1,2,3,3,7},count=1;
    for(int i=0;i<5;i++){
        if(a[i]!=-1){
            for(int j=i+1;j<5;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
            }
        }
    }
    printf("%d",count);
}
