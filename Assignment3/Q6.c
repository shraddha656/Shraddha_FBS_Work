#include<stdio.h>
void main()
{
	int num,count=2;
	printf("Enter The Number:");
	scanf("%d",&num);
	if(num<=1){
		printf("Number is not prime");
	}
	while(count<num)
	{
		if(num%count==0)
		{
			printf("%d is not prime Number",num);
			break;
		}
		else{
			printf("%d is Prime Number",num);
			
		}
		count++;
	}
}