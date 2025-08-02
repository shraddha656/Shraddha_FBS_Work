#include<stdio.h>
void main()
{
	char str[]="This is a random sentence";
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]= '@';
		}
		i++;
	}
	printf("%s",str);
}