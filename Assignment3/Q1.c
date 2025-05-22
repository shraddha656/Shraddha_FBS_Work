#include<stdio.h>
void number();
void main()
{
	number();
}
void number()
{
	int num=1;
	while(num<=10){
		printf("%d\n",num);
		num++;
	}
}