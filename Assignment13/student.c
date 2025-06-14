#include<stdio.h>
struct student{
	int rollNo;
	char name[10];
	int marks;
};
struct student storeDetails(struct student );
void display(struct student);
void main()
{
	struct student s1,s2;
	printf("Details of 1st Student\n");
	s1=storeDetails(s1);
	printf("Details of 2nd Student\n");
	s2=storeDetails(s2);
	display(s1);
	display(s2);
	
}
struct student storeDetails(struct student s)
{
	struct student temp;
	printf("Enter the rollNo: ");
	scanf("%d",&temp.rollNo);
	printf("Enter the name: ");
	scanf("%s",temp.name);
	printf("Enter the marks: ");
	scanf("%d",&temp.marks);
	s=temp;
	return temp;
}
void display(struct student d){
	printf("Roll no= %d\n",d.rollNo);
	printf("Name= %s\n",d.name);
	printf("Marks= %d",d.marks);
	
}
