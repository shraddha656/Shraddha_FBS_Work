#include<stdio.h>
void main()
{
	int arr[10]={19,24,34,49,58,60,79,80,97,100};
	
	printf("Even Numbers=" );
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d, ",arr[i]);
		}
		
	}
	printf("\nOdd Numbers=" );
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d, ",arr[i]);
		}
		
	}
}