//To print elements using array
#include <stdio.h>
int main() {
    int i,a;
    printf("Enter size of an array\n",a);
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        printf("element-%d =",i);
        scanf("%d", &arr[i]);
    }
    printf("\nelements of the array are\n");
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}
