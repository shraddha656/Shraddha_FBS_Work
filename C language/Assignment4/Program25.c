#include<stdio.h>
void printPerfect();
void main()
{
	printPerfect();
}
void printPerfect()
{
	int n,rem,fact,sum=0;
	printf("Enter the Value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		sum=0;
		
		while(temp!=0){
			rem=temp%10;
			fact=1;
			for(int j=1;j<=rem;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
	
	
}