//Count the given character in string
#include <stdio.h>
#include <string.h>
int main(){
    int count;
    char a[100]="I am a student of tamilnadu";
    char letter='a';
    for(int i=0;i<=strlen(a);i++){
        if(letter==a[i]){
            count++;
        }
    }
    printf("%d",count);
}
