//Expression 2 /example-1
#include <stdio.h>
int main() {
    int a=0,b=1,c=2;;
    while(a<5,b<6,c<10){
       printf("%d %d %d\n",a,b,c);
       a++,b+=2,c+=3;
    }
}
