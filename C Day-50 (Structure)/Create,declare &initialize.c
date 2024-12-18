//C program to create, declare and initialize structure
#include <stdio.h>
#include <string.h>
struct emp{
    char emp_name[20];
    int emp_id;
    float salary;
};
int main() {
    struct emp a;
    strcpy(a.emp_name,"xxxx");
    a.emp_id=101;
    a.salary=12,000.0;
    printf("%s\n",a.emp_name);
    printf("%d\n",a.emp_id);
    printf("%f",a.salary);
}
