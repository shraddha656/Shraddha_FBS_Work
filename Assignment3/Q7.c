#include<stdio.h>
void main(){
	int num,first,last,i=1,sum;
	printf("Enter the number:");
	scanf("%d",&num);
	last=num%10;
	first=num;
	while(num>=10){
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("Sum:%d",sum);
	
	
	

	
}