#include<stdio.h>
#include<math.h>

int main(void)
{
 char firstName[100];
 char lastName[100];
 char major[100];
 char clgYear[100];
 int gradYear;
 printf("Enter your first name:");
 scanf("%s",firstName);
 printf("Enter the last name:");
 scanf("%s",lastName);
 printf("Enter your major:");
 scanf("%s",major);
 printf("Enter year in college (ex. Freshman, sophomore, etc):");
 scanf("%s",clgYear);
 printf("Enter your graduation year: ");
 scanf("%d",&gradYear);
 printf("\nName (last, first): Name(%s, %s)\n",lastName,firstName);
 printf("Major: %s\n", major);
 printf("Year: %s\n", clgYear);
 printf("Graduation year: %d\n", gradYear);
 return 0;
 }