// To print diamond pattern
#include <stdio.h>
int main()
{
    int i,j,k,a,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=0;i<2*a-1;i++){
        if(i<a){
            c=2*(a-i)-1;}
        else{
            c=2*(i-a+1)+1;}
        for(j=0;j<c;j++){
            printf(" ");}
        for(k=0;k<2*a-c;k++){
            printf("%d ",i);}
        printf("\n");
    }
}
