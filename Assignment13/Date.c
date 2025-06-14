#include<stdio.h>
struct Date{
	int date;
	char month[10];
	int year;
};
struct Date storedate(struct Date);
void display(struct Date);
void main()
{
	struct Date d1,d2;
	storedate(&d1);
	printf("Here is your Birth date:");
	display(d1);
		
}
struct Date storedate(struct Date* d1)
{
	struct Date temp;
	printf("\nEnter date:");
	scanf("%d",&temp.date);
	printf("Enter month:");
	scanf("%s",temp.month);
	printf("Enter year:");
	scanf("%d",&temp.year);
	d=temp;
	return temp;
}
void display(struct Date e)
{
	printf("\nDate:%d / %s / %d",e.date,e.month,e.year);
	
}