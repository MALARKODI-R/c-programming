 //C program to get the address locations of union type variable
 #include<stdio.h>
 void main(){
     union student{
         double marks;
         char section;
     }arjun;
     arjun.section='A';
     printf("Address of union variable arjun: %p \n",&arjun);
     printf("size of union variable arjun: %d \n",sizeof(arjun));
     printf("Address of union variable's member variable marks: %p \n",&arjun.marks);
     printf("size of union variable's member variable marks: %d \n",sizeof(arjun.marks));
     printf("Address of union variable's member variable section: %p \n",&arjun.section);
     printf("size of union variable's member variable arjun: %d \n",sizeof(arjun.section));
 }
