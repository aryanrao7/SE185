#include<stdio.h>

char grade(double a);
double avg1(int x[2][4]);
double avg2(int y[2][4]);

int main()
{
    int i,j, mks[2][4];
    double f,g;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("Student-%d Assignment-%d grade ",(i+1),(j+1));
            scanf("%d",&mks[i][j]);
            printf("\n");
        }
    }
   printf("Student 1 Avg= %lf\n", avg1(mks));
   f=avg1(mks);
   printf("Student 1 Grade = %c\n", grade(f));

   printf("Student 2 Avg= %lf\n", avg2(mks));
   g=avg2(mks);
   printf("Student 2 Grade = %c\n", grade(g));


return 0;
}

double avg1(int x[2][4])
{
    int i,j;
    double s=0.0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(i==0 && j<4)
            {
                s=s+x[i][j];
          
            }           
 
        }
    }
   return s/4.0;
   



}
double avg2(int y[2][4])
{
    int i,j;
    double s=0.0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(i==1 && j<4)
            {
                s=s+y[i][j];
          
            }           
 
        }
    }
   return s/4.0;
   



}

char grade( double a){
    char g;
    if(a<=100 && a>=85)
	 {  g='A';}
	 else if(a>=75 && a<=84)
	 { g='B'; }
	 else if(a>=60 && a<=74)
	 { g='C'; }
	 else
	 { g='F'; }
	return g;
}
