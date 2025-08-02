#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int temp=i,count=0;
		for(int j=temp;j>0;j=j/10)
		{
			count++;
		}
		int sum=0;
		for(int j=i;j>0;j=j/10)
		{
			int rem=j%10;
			sum=sum+pow(rem,count);
		}
		if(i==sum)
		{
			printf("%d\n",i);
		}
	}
}
	