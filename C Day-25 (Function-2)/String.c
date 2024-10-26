// Print string
#include <stdio.h>
char myfunc(char* name){
    printf("Hello %s\n",name);
}
int main() {
    myfunc("xxx");
    myfunc("yyy");
    myfunc("zzz");
}
