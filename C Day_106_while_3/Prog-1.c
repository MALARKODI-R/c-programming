//Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int a = rand() % 20 + 1;
    int user;
    printf("Guess a number between 1 and 20: ");
    scanf("%d", &user);
    while (a != user) {
        if (user < 1 || user > 20) {
            printf("Please enter a valid number between 1 & 20: ");
        } else if (user < a) {
            printf("Too low! Try again: ");
        } else {
            printf("Too high! Try again: ");
        }
        scanf("%d", &user);
    }
    printf("Correct! The number was %d.\n", a);
}
