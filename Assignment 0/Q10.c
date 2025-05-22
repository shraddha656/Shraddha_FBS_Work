#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float total,ob_marks,per;
	m1=89;
	m2=90;
	m3=78;
	m4=98;
	m5=67;
	total=500;
    ob_marks=m1+m2+m3+m4+m5;
	per=(ob_marks/total)*100;
	printf("Persentage:%f",per);
}