//Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

#include <stdio.h>
int main() {
    int emp_id,hrs;
    float salary,emp_salary;
    printf("Enter employye ID,worked hr,salary: ");
    scanf("%d %d %f",&emp_id,&hrs,&salary);
    emp_salary=(salary*hrs);
    printf("%d U$%f",emp_id,emp_salary);
}
