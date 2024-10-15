//Full pyramid
#include <stdio.h>
int main() {
   int i,j,k,a,b=1;
   printf("Enter the number of rows: ");
   scanf("%d",&a);
   for(i=1;i<=a;++i) {
      for(j=1;j<=a-i;++j){
         printf("  ");}
      for(k=0;k!=2*i-1;++k){
         printf("%d ",b++);}
      printf("\n");
   }
}
