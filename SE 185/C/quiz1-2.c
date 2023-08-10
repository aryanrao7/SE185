#include<stdio.h>
int main(void)
{  
   double schoolx = 15.55;
   double schooly = 55.15;
   double mikex = 22.05;
   double mikey = 85.10;
   double maryx = 43.25;
   double maryy = 9.80;
   double garyy = 72.86;
   double garyx = 2.55;
   double loganx = 15.55;
   double logany = 40.40;
   double distMike,distMary,distGary,distLogan;
   distMike=sqrt(pow((mikex-schoolx),2.0) +pow((mikey-schooly),2.0));
   distMary=sqrt(pow((maryx-schoolx),2.0) +pow((maryy-schooly),2.0));
   distGary=sqrt(pow((garyx-schoolx),2.0) +pow((garyy-schooly),2.0));
   distLogan=sqrt(pow((loganx-schoolx),2.0) +pow((logany-schooly),2.0));
   printf(" The E distance for Mike is : %lf\n", distMike);
   printf(" The E distance for Mary is : %lf\n", distMary);
   printf(" The E distance for Gary is : %lf\n", distGary);
   printf(" The E distance for Logan is : %lf\n", distLogan);
   return(0);
   }