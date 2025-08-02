#include<stdio.h>
typedef struct Players{
	char name[20];
	int playedmatch;
	int runs;
	int wickets;
}Players;
void storeInfo(Players*,int);
void display(Players*,int);
void findMax(Players*,int);
void main()
{
	Players prr[2];
	storeInfo(prr,2);
	display(prr,2);
	findMax(prr,2);
}
void storeInfo(Players* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the Name: ");
		scanf("%s",ptr[i].name);
		printf("Enter the playedmatch: ");
		scanf("%d",&ptr[i].playedmatch);
		printf("Enter the Runs: ");
		scanf("%d",&ptr[i].runs);
		printf("Enter the wickets: ");
		scanf("%d",&ptr[i].wickets);
	}
}
void display(Players* ptr,int size)
{
	printf("\n--- Player Information ---\n");
	for(int i=0;i<size;i++)
	{
		printf("\nPlayer %d:\n", i + 1);
		printf("Enter the Name:%s\n",ptr[i].name);
		printf("Enter the playedmatch:%d \n",ptr[i].playedmatch);
		printf("Enter the Runs: %d\n",
		ptr[i].runs);
		printf("Enter the wickets:%d \n",ptr[i].wickets);
		
	}
}
void findMax(Players* ptr,int size)
{
	int maxRuns=0;
	int maxWickets=0;
	for(int i=1;i<size;i++)
	{
		if(ptr[i].runs>ptr[maxRuns].runs){
			maxRuns=i;
		}
			
		if(ptr[i].wickets>ptr[maxWickets].wickets){
			maxWickets=i;
		}
	printf("\n--- Player with Maximum Runs ---\n");
    printf("Name: %s\n", ptr[maxRuns].name);
    printf("Runs: %d\n", ptr[maxRuns].runs);

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name: %s\n", ptr[maxWickets].name);
    printf("Wickets: %d\n", ptr[maxWickets].wickets);
	}
}    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    