// Write a C program that prompts the user to enter a password. Use a do-while loop to keep asking for the password until the correct one is entered
#include <stdio.h>
#include<string.h>
int main() {
    char pw[]="XXX";
    char pass[20];
    do{
        printf("Enter your password: ");
        scanf("%s",&pass);
        if(strcmp(pw,pass)==0){
            printf("access granted!!");
            break;
        }
        else{
            printf("Enter correct password!!\n");
        }
    }while(1);
}
