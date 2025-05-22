#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Character:");
	scanf(" %c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("Given character is Vowel");
	}
	else{
		printf("Given character is Consonent");
	}
	
}