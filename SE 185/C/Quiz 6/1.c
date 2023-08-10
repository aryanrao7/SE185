#include <stdio.h>
#include <math.h>

int main()
{ const int numHw = 5;
  int hw[numHw];
  const int numExam = 3;
  int exam[numExam];
  double weightAvg;
  double hwAvg;
  double examAvg;
  
  for( int i =0;i<numHw; i++)
    { printf("Enter your grade (%%) for HW #0%d:",(i+1));
	  scanf("%d", &(hw[i]));
	}
  for( int i =0;i< numExam; i++)
    { printf("Enter your grade (%%) for Exam #0%d:",(i+1));
	  scanf("%d", &(exam[i]));
	}
	
	hwAvg=0;
  for( int i =0;i< numHw; ++i)
    { hwAvg+= hw[i];

	}
	hwAvg=hwAvg/5.0;
examAvg=0;
  for( int i=0;i< numExam; ++i)
    { examAvg+=exam[i];
	}
	examAvg=examAvg/3.0;
	
 weightAvg= (0.40 * hwAvg) + (0.60 * examAvg);
  printf("\nFinal grade = %.2lf%%\n" , weightAvg); 
  
 return 0;
}