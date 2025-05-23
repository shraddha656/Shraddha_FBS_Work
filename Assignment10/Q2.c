#include<stdio.h>
void main()
{
	char str[]="ananya";
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
		i++;
	}
	printf("%s",str);
}