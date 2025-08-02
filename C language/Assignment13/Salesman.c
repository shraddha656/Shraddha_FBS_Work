#include<stdio.h>
struct salesManager{
	int id;
	char name[20];
	double salary;
	double commission;
};
struct salesManager storeinfo(struct salesManager);
void display(struct salesManager);
void main(){
	struct salesManager s;
	printf("Enter the Details of salesManager:\n");
	h=storeinfo(h);
	display(h);
	
}
struct salesManager storeinfo(struct salesManager x)
{
	struct salesManager temp;
	printf("Enter id : ");
	scanf("%d",&temp.id);
	printf("Enter Name : ");
	scanf("%s",temp.name);
	printf("Enter salary : ");
	scanf("%lf",&temp.salary);
	printf("Enter commission : ");
	scanf("%lf",&temp.commission);
	x=temp;
	return x;
}
void display(struct salesManager a){
	printf("ID=%d\n",a.id);
	printf("Name=%s\n",a.name);
	printf("Salary=%lf\n",a.salary);
	printf("commission=%lf",a.commission);
}

