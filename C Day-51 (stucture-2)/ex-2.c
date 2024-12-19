// Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.
#include <stdio.h>
struct time{
    int hr,min,sec;
};
int main() {
    struct time t1,t2;
    printf("hour of t1: ");
    scanf("%d",&t1.hr);
    printf("hour of t2: ");
    scanf("%d",&t2.hr);
    printf("minute of t1: ");
    scanf("%d",&t1.min);
    printf("minute of t2: ");
    scanf("%d",&t2.min);
    printf("second of t1: ");
    scanf("%d",&t1.sec);
    printf("second of t1: ");
    scanf("%d",&t2.sec);
    int add_hr=(t1.hr+t2.hr);
    int add_min=(t1.min+t2.min);
    int add_sec=(t1.sec+t2.sec);
    if(add_sec>=60) {
        add_sec-=60;
        add_min++;
    }
    if (add_min>=60) {
        add_min-=60;
        add_hr++;
    }
    printf("The addition of 2 time is %d:%d:%d",add_hr,add_min,add_sec);
}
