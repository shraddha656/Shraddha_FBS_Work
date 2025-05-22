#include<stdio.h>
void main()
{
	int min,hr,remain_min;
	min=1259;
	hr=min/60;
	remain_min=min%60;
	printf("%d Minutes=%d hours %d minutes",min,hr,remain_min);
}