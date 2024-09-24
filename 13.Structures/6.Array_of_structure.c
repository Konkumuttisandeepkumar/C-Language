#include<stdio.h>
#define MAX_SIZE 100

struct student{
	char name[100];
	int rollno;
	float percentage;
};

int main()
{

	struct student class[MAX_SIZE];
	int strength,i;

	printf("Enter Total Strength of The Class: ");
	scanf("%d",&strength);

	for(i=1;i<=strength;i++)
	{
		printf("\nEnter Details For Student %d\n",i);

		printf("Enter Student Name: ");
		scanf("%s",class[i].name);

		printf("Enter Student Roll Number: ");
                scanf("%d",&class[i].rollno);

		printf("Enter Percentage of Student: ");
                scanf("%f",&class[i].percentage);
	}
	
	printf("\n/*****Total Class Details Are*****/\n\n");
	for(i=1;i<=strength;i++)
	{
		printf("Student %d details\n",i);
		printf("\tName: %s\n",class[i].name);
		printf("\tRoll Number: %d\n",class[i].rollno);
		printf("\tPercentage: %.2f\n\n",class[i].percentage);
	}
return 0;
}


