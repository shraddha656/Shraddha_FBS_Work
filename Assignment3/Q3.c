#include<stdio.h>
void main()
{
	int x,y,sum=0;
	printf("Enter Starting Number:");
	scanf("%d",&x);
	printf("Enter Ending Number:");
	scanf("%d",&y);
	while(x<=y){
		sum=sum+x;
		x++;
	}
	printf("Sum of the given range:%d",sum);
}