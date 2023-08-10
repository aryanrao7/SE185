#include<stdio.h>
#include<math.h>
double DrivingCost(double drivenMiles,double milesPerGallon,double dollarsPerGallon)
{ double x,y;
  x= drivenMiles/(milesPerGallon);
  y=x* dollarsPerGallon;
  return y;
  }
  
int main(void)
{double drivenMiles;
double milesPerGallon;
double dollarsPerGallon;
printf("Enter driven Miles:");
scanf("%lf", &drivenMiles);
printf("Enter Miles per Gallon:");
scanf("%lf", &milesPerGallon);
printf("Enter dollars per Gallon:");
scanf("%lf", &dollarsPerGallon);
printf("Driving cost= %0.2lf",DrivingCost(drivenMiles,milesPerGallon,dollarsPerGallon));
return(0);
}