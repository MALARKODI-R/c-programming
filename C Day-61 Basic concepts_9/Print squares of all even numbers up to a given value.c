//Print squares of all even numbers up to a given value
#include <stdio.h>
int main() {
    int a,squared_number;
    printf("Enter a range you want:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            squared_number=i*i;
            printf("%d\n",squared_number);
        }
    }
}
