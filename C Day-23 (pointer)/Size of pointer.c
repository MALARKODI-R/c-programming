//size of pointer
#include <stdio.h>
int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
    printf("sizeof arri[] = %d ", sizeof(arri));
    printf("sizeof ptri = %d\n", sizeof(ptri));
    char arrc[] = {1, 2 ,3};
    char *ptrc = arrc;
    printf("sizeof arrc[] = %d ", sizeof(arrc));
    printf("sizeof ptrc = %d ", sizeof(ptrc));
}
