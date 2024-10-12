//Number of vowels in the gn sentence
#include <stdio.h>
int main() {
    char a[20]="I am a student";
    int i,count=0;
    for(i=0;i<=15;i++){
        if(a[i]=='a' || a[i]=='e'|| a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E'|| a[i]=='I' || a[i]=='O' || a[i]=='U'){
            count++;
        }
    }printf("The number of vowels in the given sentence is %d",count);
}
