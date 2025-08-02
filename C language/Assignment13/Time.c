#include<stdio.h>
struct Time{
	int hour;
	int min;
	int sec;
};
struct Time storetime(struct Time);
void display(struct Time);
void main()
{
	struct Time t1;
	t1=storetime(t1);
	printf("Here is your Dinner time:");
	display(t1);
		
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
	printf("\nTime:%d : %d : %d",e.hour,e.min,e.sec);
	
}