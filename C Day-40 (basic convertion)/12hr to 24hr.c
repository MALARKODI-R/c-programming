// Convert 12hr to 24hr format
#include <stdio.h>
#include <string.h>
int main() {
    int hr=2,min=30,sec=0;
    char a[3];
    printf("Give whether time is am or pm: ");
    scanf("%s",&a);
    if(hr<=12 && min<=59 && sec<=59){
        if((strcmp(a,"PM")==0) || (strcmp(a,"pm")==0)){
        if(hr!=0){
            hr=hr+12;
        }
    }
        if((strcmp(a,"AM")==0) || (strcmp(a,"am")==0)){
        if(hr==12){
            hr=0;
        }
    }
        printf("The converted time is:%02d:%02d:%02d",hr,min,sec);
    }
}
