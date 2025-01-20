// Write a C program that takes two positive integer values as input and checks if either of them is in the range of 20 to 30 (inclusive). If at least one number falls in this range, the program returns the larger value. Otherwise, it returns 0
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 positive numbers: ");
    scanf("%d %d",&a,&b);

    if((a>0) && (b>0)){
        if(((a>20)&&(a<30)) || ((b>20)&&(b<30))){
            if(a>b)
                printf("the larger value is %d",a);
            else
                printf("the larger value is %d",b);
        }
        else
            printf("0");
    }
}
