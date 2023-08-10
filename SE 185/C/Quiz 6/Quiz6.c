#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char first_name[50],last_name[50];
    char* full_name = NULL;
    int num_letters=0;
    printf("Whats your first name\n");
    scanf("%s",first_name);
    printf("Whats your last name\n");
    scanf("%s",last_name);
    printf("First Name: %s \nLast Name : %s\n",first_name,last_name);
    first_name[strlen(first_name)-1]='\0';
    last_name[strlen(last_name)-1]='\0';
   
    full_name=(char*)malloc(strlen(first_name)+strlen(last_name)*sizeof(char));
   
for(int i=0; i< strlen(full_name); i++)
{
if (full_name!= NULL)
{
        for (;*(full_name+num_letters) != '\0'|| *(full_name+num_letters)!='!' || *(full_name+num_letters) != '@'|| *(full_name+num_letters) != '$'|| *(full_name+num_letters) != '#' ;++num_letters);
       
    }
}
printf("Full Name: %s",full_name);
    free(full_name);

    return 0;
}