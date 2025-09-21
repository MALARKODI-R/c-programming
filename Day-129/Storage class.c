// Storage class
#include <stdio.h>
extern int d;
void demo(){
    auto int a=3;
    register int b=9;
    static int c=0;
    c++;
    printf("%d %d %d %d\n",a,b,c,d);
}
int d=12;
int main() {
    demo();
    demo();
    return 0;
}
