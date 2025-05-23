#include<stdio.h>
void main()
{
	char str[]="This is a random string";
	int i=0;
	int count=1;
	while(str[i]!=0)
	{
		if(str[i]==' ')
			count++;
		i++;
	}
	printf("Number of words present in a given string is %d",count);
	
}