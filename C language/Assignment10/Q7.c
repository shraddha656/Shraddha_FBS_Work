#include<stdio.h>
void main()
{
	char str[]="This is a random sentense";
	int i=0;
	while(str[i]!='\0')
	{
		if(i%2!=0)
			str[i]=str[i+1];
			
		i++;
	}
	printf("%s",str);
}