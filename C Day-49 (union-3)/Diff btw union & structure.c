// Difference between structure and union
#include <stdio.h>
union unionjob{
    char emp_name[32];
    float salary;
    int workerno;
}ujob;
struct structjob{
    char emp_name[32];
    float salary;
    int workerno;
}sjob;
int main() {
    printf("Size of union=%d bytes\n",sizeof(ujob));
    printf("Size of structure=%d bytes",sizeof(sjob));
}
