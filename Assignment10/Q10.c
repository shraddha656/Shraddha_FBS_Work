#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int len,temp;
	printf("Enter the string:");
	scanf("%s",str);
	len=strlen(str);
	char cpystr[10];
	strcpy(cpystr,str);
	for(int i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
		
	}
	//printf("%s",str);
	if(strcmp(str,cpystr)==0)
		printf("String is palindrom");
	else
		printf("String is not palindrom");
	
	
}