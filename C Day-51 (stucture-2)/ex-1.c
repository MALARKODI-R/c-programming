// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
#include <stdio.h>
struct student{
    char name[20];
    int age;
    float tot_marks;
};
int main() {
    struct student stud1,stud2;
    printf("Name of 1st student: ");
    scanf("%s",&stud1.name);
    printf("age of 1st student: ");
    scanf("%d",&stud1.age);
    printf("total name of 1st student: ");
    scanf("%f",&stud1.tot_marks);
    printf("Name of 2nd student: ");
    scanf("%s",&stud2.name);
    printf("age of 2nd student: ");
    scanf("%d",&stud2.age);
    printf("total name of 2nd student: ");
    scanf("%f",&stud2.tot_marks);
    float avg=(stud1.tot_marks + stud2.tot_marks)/2;
    printf("The average of 2 students is %f",avg);
}
