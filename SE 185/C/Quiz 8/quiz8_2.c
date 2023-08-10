#include<stdio.h>

typedef struct time{
    int hr;
    int min;
    int sec;
}time;

void convTime(int sec, time *mileTime);
void printTime(int sec, time *mileTime);

void main()
{
    time *mileTime;
    
    int seconds;
    printf("Total seconds: ");
    scanf("%d",&seconds);
    printf("%d\n",seconds);
    
    convTime(seconds, mileTime);
    printTime(seconds, mileTime);
}

void convTime(int sec, time *mileTime)
{
    mileTime->hr = (sec/3600); 
	
	mileTime->min = (sec -(3600*mileTime->hr))/60;
	
	mileTime->sec = (sec -(3600*mileTime->hr)-(mileTime->min*60));
}

void printTime(int sec, time *mileTime)
{
    printf("%d seconds = %d hr %d min %d sec\n",sec,mileTime->hr,mileTime->min,mileTime->sec);
}