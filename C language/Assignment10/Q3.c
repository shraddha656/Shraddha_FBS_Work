#include<stdio.h>
void main()
{
	char str[]="I love my country";
	int n;
	printf("Enter the no. of index you want to remove: ");
	scanf("%d",&n);
	if (n < 0 || n >= strlen(str))
	{
        printf("Invalid index.\n");
        return 1;
    }
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==str[n])
		{
			str[i]=str[i+1];
		}
		i++;
	}
	printf("%s",str);
}