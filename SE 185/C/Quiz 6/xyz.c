#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{  
double avg1;
double avg2;
char grade1;
char grade2;
   int grades[2][4];
   
   for(int i=0; i<2;i++)
   {
     for(int j=0; j<4;j++)
	  { 
		printf("Student-%d Assignment-%d grade: \n",(i+1),(j+1));
        scanf("%d",&(grades[i][j]));
	  }
	  
   }
   
   avg1=0;
   for(int i=0;i<2;i++)
   {
     for(int j=0;j<4;j++)
      {
        if(i=0 && j<4)
         { 
           avg1=avg1+grades[i][j];
	     }
        
	  }
	}
	avg1=avg1/3.0;
	if(avg1<=100 && avg1>=85)
	 {  grade1=='A';}
	 else if(avg1>=75 && avg1<=84)
	 { grade1=='B'; }
	 else if(avg1>=60 && avg1<=74)
	 { grade1=='C'; }
	 else
	 { grade1=='F'; }
 
	 printf("Student 1 Avg = %.2lf",avg1);
     printf("Student 1 Grade = %c", grade1);
	avg2=0;
	for(int i=0;i<2;i++)
   {
     for(int j=0;j<4;j++)
      {
		  
        if(i=0 && j<4)
         { 
           avg2=avg2+grades[i][j];
	     }
        
	   }
	}
	avg2=avg2/3.0;
	if(avg2<=100 && avg2>=85)
	 {  grade2=='A';}
	 else if(avg2>=75 && avg2<=84)
	 { grade2=='B'; }
	 else if(avg2>=60 && avg2<=74)
	 { grade2=='C'; }
	 else
	 { grade2=='F'; }
	 
         
          printf("Student 2 Avg = %.2lf",avg2);
          printf("Student 2 Grade = %c", grade2);
	 
	 return 0;
	}