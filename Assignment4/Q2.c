#include<stdio.h>
void main()
{
	int n,count=2;
	printf("Enter The value of n:");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{  
		int isPrime=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime)
		{
			printf("%d\n",i);
		}
		
    }
}