// Print statement without main() function using token pasting operator by obfuscation
#include <stdio.h>
#define pseudo(s,t,u,m,p,e,d) m##s##u##t
#define nomain pseudo(a,n,i,m,a,t,e)
int nomain() {
    printf("I am an engineer");
}
