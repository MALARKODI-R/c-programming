//Print hollow inverted full pyramid
#include <stdio.h>
int main()
{
    int a,i,j,k,b=1;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for (i=0;i<a;i++) {
        for (j=0;j<2*i+1;j++) {
            printf(" ");
        }
        for (k=0;k<2*(a-i)-1;k++) {
            if (k==0 || k==2*(a-i)-2 || i==0) {
                printf("%d ",b++);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
