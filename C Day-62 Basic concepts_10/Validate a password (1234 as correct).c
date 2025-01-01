// Validate a password (1234 as correct)
#include <stdio.h>
int main() {
    int password;
    printf("Enter your password: ");
    scanf("%d",&password);

    if(password==1234){
        printf("Correct password");
    }

    else{
        printf("Incorrect password");
    }
}
