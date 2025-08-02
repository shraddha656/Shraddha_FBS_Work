#include<stdio.h>
struct Distance{
	int feet;
	int inch;
};
struct Distance storedistance(struct Distance);
void display(struct Distance);

void main()
{
	struct Distance d1;
	d1=storedistance(d1);
	printf("Here is the distance:");
	display(d1);
}
struct Distance storedistance(struct Distance d)
{
	struct Distance temp;
	printf("Enter the feet: ");
	scanf("%d",&temp.feet);
	printf("Enter the inches: ");
	scanf("%d",&temp.inch);
	d=temp;
	return d;
}
void display(struct Distance e){
	printf("Distance:%d feet %d inches",e.feet,e.inch);
}