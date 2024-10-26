// Passing array to function
#include <stdio.h>
int myfunc(int a[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
int main() {
   int a[5]={1,2,3,4,5};
   myfunc(a);
}
