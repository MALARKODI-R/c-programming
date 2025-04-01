/*Frequency of Array Elements

Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times*/
#include <stdio.h>
int main() {
    int s1;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&s1);
    int a1[s1];
    printf("Input %d elements in the array :",s1);
    for(int i=0;i<s1;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<s1;i++){
        if(a1[i]!=-1){
            int count=1;
            for(int j=i+1;j<s1;j++){
                if(a1[i]==a1[j]){
                    count++;
                    a1[j]=-1;
                }
            }
            printf("%d occurs %d times\n",a1[i],count);
        }
        }
    }
