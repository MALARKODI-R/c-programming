// username and password
#include <stdio.h>
int main() {
    char username[20],password[8],pass_word;
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    printf("Enter password: ");
    for(int i=0;i<8;i++){
        pass_word=getchar();
        password[i]=pass_word;
        if(pass_word == '\n') {
            break;
        }
        pass_word='*';
        printf("%c",pass_word);
        password[i]='\0';
    }
   printf("\nPassword entered successfully. It will not be displayed for security reasons.\n");
}
