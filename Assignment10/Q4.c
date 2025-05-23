#include<stdio.h>
void main()
{
	char str[]="shraddha";
	
		char temp[10];
		temp[0]=str[0];
		str[0]=str[strlen(str)-1];
		str[strlen(str)-1]=temp[0];
	

	
	printf("Modified string :%s",str);
}