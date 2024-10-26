//odd or even
#include <stdio.h>
void oddeven(int a){
    if(a%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}
int main() {
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   oddeven(x);
}
