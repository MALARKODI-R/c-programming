/*Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6*/
#include <stdio.h>
#include <limits.h>
int main() {
    int size;
    printf("Input the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Input %d elements in the array :\n",size);
    for(int i=0;i<size;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }int first=INT_MIN,second=INT_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        }
        else if((a[i]>second) && (a[i]!=first)){
            second=a[i];
        }
    }
    if(second==INT_MIN){
        printf("There is no second largest element (all elements may be equal).\n");
    }
    else{
        printf("The Second largest element in the array is : %d\n", second);
    }
}
