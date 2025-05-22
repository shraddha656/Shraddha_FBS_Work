#include<stdio.h>
void areaOfRect(int,int);
void periOfRect(int,int);
void main()
{
	int length,breadth;
	printf("Enter length of rectangle:");
	scanf("%d",&length);
	printf("Enter breadth of rectangle:");
	scanf("%d",&breadth);
	areaOfRect(length,breadth);
	periOfRect(length,breadth);
}
void areaOfRect(int len,int bre)
{
	int area=len*bre;
	printf("Area of Rectangle:%d\n",area);
}
void periOfRect(int len,int bre)
{
	int peri=2*(len+bre);
	printf("Perimeter of Rectangle:%d",peri);
}