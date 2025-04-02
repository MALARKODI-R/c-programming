/*Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21*/
#include <stdio.h>

int main() {
    int s1;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&s1);
    int a1[s1];
    printf("Input 3 elements in the array :\n");
    for(int i=0;i<s1;i++){
        scanf("%d",&a1[i]);
    }
    int max=a1[0],min=a1[0];
    for(int i=1;i<s1;i++){
        if(a1[i]>max){
        max=a1[i];
    }
    else if(a1[i]<min){
        min=a1[i];
    }
    }
    printf("min=%d and max=%d",min,max);
}
