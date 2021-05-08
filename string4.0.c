#include<stdio.h>
int main()
{
    char username[30],password[30];
    printf("Enter the username:");
    scanf("%s",username);
    printf("Enter the password:");
    scanf("%s",password);
    if(strcmp(username,"cs")==0 && strcmp(password,"nasc")==0)
    {
        printf("Welcome to our program");
    }
    else
    {
        printf("Invalid login");
    }
    printf("\n\n");
}
