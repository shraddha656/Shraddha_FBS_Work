#include<stdio.h>
void main()
{
	int num=472359347;
	int rem,rev=0;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	num=rev;
	int count=1;
	while(num>0)
	{
		rem=num%10;
		if(count%2==1)
		{
			printf("%d-",rem);
		}
		num=num/10;
		count++;
	}
	
		
}