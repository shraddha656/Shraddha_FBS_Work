#include<stdio.h>
struct HR{
	int id;
	char name[20];
	double salary;
	double commission;
};
struct HR storeinfo(struct HR);
void display(struct HR);
void main(){
	struct HR h;
	printf("Enter the Details of HR:\n");
	h=storeinfo(h);
	display(h);
	
}
struct HR storeinfo(struct HR x)
{
	struct HR temp;
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
void display(struct HR a){
	printf("ID=%d\n",a.id);
	printf("Name=%s\n",a.name);
	printf("Salary=%lf\n",a.salary);
	printf("commission=%lf",a.commission);
}

