#include<stdio.h>
void main()
{
	char str[]="shraddhaei";
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("There are %d vowels are present",count);
}