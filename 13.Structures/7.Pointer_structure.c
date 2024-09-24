#include<stdio.h>
struct student{
	char name[100];
	int age;
	float percent;
};

int main()
{
	struct student class;
	struct student *ptr;
	ptr=&class;
	
	printf("Please Enter Student Details\n");
	
	printf("Enter Student Name:");
	scanf("%s",ptr->name);

	printf("Enter Student Age:");
	scanf("%d",&ptr->age);

	printf("Enter Percentage of Student:");
	scanf("%f",&ptr->percent);

	printf("\n/*****Entered Student Details are*****/\n");
	printf("\tStudent Name: %s\n",ptr->name);
	printf("\tStudent Age: %d\n",ptr->age);
	printf("\tTotal Percentage of Student: %.2f\n",ptr->percent);
	
	return 0;
}
