/*Second Smallest Element

Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4*/
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
    }int first=INT_MAX,second=INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<first){
            second=first;
            first=a[i];
        }
        else if((a[i]<second) && (a[i]!=first)){
            second=a[i];
        }
    }
    if(second==INT_MIN){
        printf("There is no second smallest element (all elements may be equal).\n");
    }
    else{
        printf("The Second smallest element in the array is : %d\n", second);
    }
}
