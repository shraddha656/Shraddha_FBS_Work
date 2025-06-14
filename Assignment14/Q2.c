#include<stdio.h>
struct Time{
	int hour;
	int min;
	int sec;
};
struct Time storetime(struct Time);
void display(struct Time);
struct Time addTime(struct Time,struct Time);
void displayTime(struct Time);
int timeToSeconds(struct Time );
void main()
{
	struct Time time1,time2;
	time1=storetime(time1);
	display(time1);
	time2=storetime(time2);
	display(time2);
	struct Time result;
	result=addTime(time1,time2);
	printf("\nAddition of Time:");
	displayTime(result);
	
	printf("\nFirst time in seconds: %d\n", timeToSeconds(time1));
    printf("Second time in seconds: %d\n", timeToSeconds(time2));
    printf("Sum in seconds: %d\n", timeToSeconds(result));
		
}
struct Time storetime(struct Time t)
{
	struct Time temp;
	printf("\nEnter Hour:");
	scanf("%d",&temp.hour);
	printf("Enter Minute:");
	scanf("%d",&temp.min);
	printf("Enter Second:");
	scanf("%d",&temp.sec);
	t=temp;
	return temp;
}
void display(struct Time e)
{
	printf("%d : %d : %d",e.hour,e.min,e.sec);
}
struct Time addTime(struct Time t1,struct Time t2)
{
	struct Time result;
	result.sec=t1.sec+t2.sec;
	result.min=t1.min+t2.min+(result.sec/60);
	result.sec=result.sec%60;
	result.hour=t1.hour+t2.hour+(result.min/60);
	result.min=result.min%60;
	return result;
}
void displayTime(struct Time t)
{
	printf("%d : %d : %d ",t.hour,t.min,t.sec);
}
int timeToSeconds(struct Time t) 
{
    return t.hour * 3600 + t.min * 60 + t.sec;
}                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 