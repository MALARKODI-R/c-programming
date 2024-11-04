//Sort the string
#include <stdio.h>
#include <string.h>
int main(){
    char a[100]="I am a student of tamilnadu";
    char b;
    int length=strlen(a);
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(a[i]>a[j]){
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
        }
    }
    printf("%s",a);
}
