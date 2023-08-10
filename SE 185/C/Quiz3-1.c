#include<stdio.h>
#include<math.h>
int main(void)
{  double percent;
  printf("Please enter your grading percentage:\n");
  scanf("%lf", &percent);
  if(percent>=0 && percent<=100) {
        if( percent >=93 && percent<=100)
		{ printf("Your grade letter is A."); }
		else if( percent>=90 && percent<93)
		{ printf("Your grade letter is A-."); }
		else if( percent>=87 && percent<90)
		{ printf("Your grade letter is B+."); }
		else if( percent>=83 && percent<87)
		{ printf("Your grade letter is B."); }
		else if( percent>=80 & percent<83)
		{ printf("Your grade letter is B-."); }
		else if( percent>=77 & percent<80)
		{ printf("Your grade letter is C+."); }
		else  if( percent>=73 & percent<77)
		{ printf("Your grade letter is C."); }
		else if( percent>=70 & percent<73)
		{ printf("Your grade letter is C-."); }
		else if( percent>=67 & percent<70)
		{ printf("Your grade letter is D+."); }
		else if( percent>=63 & percent<67)
		{ printf("Your grade letter is D"); }
		else if( percent>=60 & percent<63)
		{ printf("Your grade letter is D-"); }
	    else{
		printf(" Your grade letter is F."); }
  
  }
  else{
  printf("Your grade must be between 0 percent and 100 percent inclusively.");}
  
  return 0;
  }