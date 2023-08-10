#include<stdio.h>

int main()
{
    int i;
    char s[100];
    printf("Please enter a password: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='i')
           s[i]='1';
        if(s[i]=='a')
           s[i]='@';
        if(s[i]=='m')
           s[i]='M';
        if(s[i]=='B')
           s[i]='8';
        if(s[i]=='s')
           s[i]='$';    

    }

    printf("\nYour updated password: %s!",s);

    return 0;
}