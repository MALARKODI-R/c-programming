//To print average of 2 elements using array
#include <stdio.h>
int main() {
    int i,sum=0;
    float avg;
    int arr[2];
    printf("Enter 2 elements of an array\n");
    for(i=0;i<2;i++){
        printf("element-%d =",i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<2;i++){
        sum=sum+arr[i];
    }printf("Sum of 2 numbers is %d",sum);
    avg=sum/2;
    printf("\naverage is= %f",avg);
}
