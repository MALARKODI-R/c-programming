 //C program to illustrate the Memory distribution/consumption in union variable
 #include<stdio.h>
 void main(){
     union student{
         double marks;
         char section;
     }arjun;
     arjun.section='A';
     printf("%d",sizeof(arjun));
 }
