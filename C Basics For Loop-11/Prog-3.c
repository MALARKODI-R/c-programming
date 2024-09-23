//Expression 2 /example-1
#include <stdio.h>
int main() {
    int a,b,c;
    for(a=0,b=1,c=2;a<5,b<6,c<10;a++,b+=2,c+=3){
       printf("%d %d %d\n",a,b,c);
    }
}
