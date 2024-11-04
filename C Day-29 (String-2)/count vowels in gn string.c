//Count the vowels in string
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char a[100]="I am a student of tamilnadu";
    char b[50]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<=strlen(a);i++){
        for(int j=0;j<=i;j++){
            if(b[j]==a[i]){
            count++;
            break;
        }
        }
    }
    printf("%d",count);
}
