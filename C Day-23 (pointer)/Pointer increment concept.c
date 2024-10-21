//Pointer prog-2
#include <stdio.h>
int main(){
    int *ptr,a;
    ptr=(int *)&a;
    *ptr=0;
    printf("%d %d\n",a,ptr);
    *ptr+=5;
    printf("%d %d\n",a,ptr);
    (*ptr)++;
    printf("%d %d",a,ptr);
}
