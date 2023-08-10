#include<stdio.h>
int main(void)
{  
   long int phoneNumber;
   long int areaCode;
   long int exchangeCode;
   long int temp1;
  long int userNumber;
   printf(" Enter a 10 digit phone number");
   scanf("%ld",&phoneNumber);
   userNumber=phoneNumber % 10000;
   
 
    temp1=phoneNumber/10000;
   exchangeCode= temp1 % 1000;
   areaCode= temp1/1000;
   printf(" Area code is: %ld\n", areaCode);
   printf(" Exchange code is: %ld\n",exchangeCode);
   printf(" User number is: %ld\n", userNumber);
   return(0);
   }
