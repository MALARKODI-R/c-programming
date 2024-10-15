//To print hollow square pattern
#include<stdio.h>
void main()
{
     int i,j,a;
     printf("Enter a number: ");
     scanf("%d",&a);
     for(i=0;i<a;i++){
         for(j=0;j<a;j++){
             if (i==0 || i==a-1 || j==0 || j==a-1){
                 printf("%d ",i);}
             else{
                 printf("  ");}
         }printf("\n");
     }
}
