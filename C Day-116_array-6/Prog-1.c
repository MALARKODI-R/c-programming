/*Merge Two Sorted Arrays (Descending)

Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1*/
#include <stdio.h>

int main() {
    int s1,s2;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&s1);
    int a1[s1];
    printf("Input %d elements in the array :",s1);
    for(int i=0;i<s1;i++){
        scanf("%d",&a1[i]);
    }
    printf("Input the number of elements to be stored in the second array :",s2);
    scanf("%d",&s2);
    int a2[s2];
    printf("Input %d elements in the array :",s2);
    for(int i=0;i<s2;i++){
        scanf("%d",&a2[i]);
    }
    int a3[s1+s2],k=0;
    for(int i=0;i<s1;i++){
          a3[k++] = a1[i];
    }
    for(int i=0;i<s2;i++){
        a3[k++]=a2[i];
    }
    int temp;
    for(int i=0;i<s1+s2-1;i++){
        for(int j=0;j<s1+s2-i-1;j++){
             if(a3[j]< a3[j+1]){
            temp=a3[j];
            a3[j]=a3[j+1];
            a3[j+1]=temp;
        }
        }
    }
    printf("The merged array in descending order: ");
        for(int i=0;i<s1+s2;i++){
            printf("%d ",a3[i]);
        }
    printf("\n");
}
