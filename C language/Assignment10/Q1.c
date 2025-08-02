#include<stdio.h>
void main()
{
	char str[10];
	char ch;
	int i=0;
	int flag=0;
	printf("Enter the string:");
	scanf("%s",str);
//	printf("%s",str);
	printf("\nSearch a single character:");
	scanf(" %c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
		printf("\nCharacter found!!");
	else
		printf("\nCharacter not found!!");
}