#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char pass[50];
    printf("Enter your username: ");
    scanf("%s",str);
    printf("Enter your password: ");
    scanf("%s",pass);

    if(strcmp(str,"se185@iastate.edu")==0 && strcmp(pass,"ds4rd")==0)
        printf("Success!\n");
    else
        printf("Username or password is incorrect\n");

   return 0;     

}