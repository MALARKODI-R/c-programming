// Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
#include <stdio.h>

int main() {
    int amt,total;
    printf("Enter amount: ");
    scanf("%d",&amt);

    total=(int)amt/100;
    printf("There are\n");
    printf("%d notes of 100\n",total);
    amt=amt-(total*100);

    total=(int)amt/50;
    printf("%d notes of 50\n",total);
    amt=amt-(total*50);

    total=(int)amt/20;
    printf("%d notes of 20\n",total);
    amt=amt-(total*20);

    total=(int)amt/10;
    printf("%d notes of 10\n",total);
    amt=amt-(total*10);

    total=(int)amt/5;
    printf("%d notes of 5\n",total);
    amt=amt-(total*5);

    total=(int)amt/2;
    printf("%d notes of 2\n",total);
    amt=amt-(total*2);

    total=(int)amt/1;
    printf("%d notes of 1\n",total);
    amt=amt-(total*1);
}
