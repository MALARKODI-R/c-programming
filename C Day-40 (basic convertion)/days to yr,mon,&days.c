// Convert days to year,month and days format
#include <stdio.h>
int main(){
    int ndays, year, week, days;
    int DAYSINWEEK=7;
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / DAYSINWEEK;
    days =(ndays % 365) % DAYSINWEEK;
    printf ("%d is equivalent to %d years, %d weeks and %d day",
            ndays, year, week, days);
}
