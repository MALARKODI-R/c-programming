// Calculate Electricity bill
#include <stdio.h>
int main() {
    int power,timereq;
    int energy;
    printf("Enter power &time:");
    scanf("%d %d",&power,&timereq);
    energy=power*timereq/1000;
    printf("The Electricity bill is:%d",energy);
}
