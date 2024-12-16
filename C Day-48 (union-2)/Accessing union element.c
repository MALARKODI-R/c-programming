// Accessing union members
#include <stdio.h>
union job{
        float salary;
        int workerno;
    }j;
int main() {
    j.salary=12500.0;
    j.workerno=12;
    printf("salary=%f\n",j.salary);
    printf("workerno=%d",j.workerno);
}
