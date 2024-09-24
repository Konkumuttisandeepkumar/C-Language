#include<stdio.h>
struct student
	{
		char name[100];
		int age;
		float percent;
	};

struct student get_student_data()
	{
		struct student s;

		printf("Please Enter Student Details\n");

        	printf("Enter Student Name:");
        	scanf("%99s",s.name);

        	printf("Enter Student Age:");
        	scanf("%d",&s.age);

        	printf("Enter Percentage of Student:");
        	scanf("%f",&s.percent);

		return s;
}

int main()
	{
		struct student s1 = get_student_data();
		
		printf("\n/*****Entered Student Details are*****/\n");
        	printf("\tStudent Name: %s\n",s1.name);
        	printf("\tStudent Age: %d\n",s1.age);
       		printf("\tTotal Percentage of Student: %.2f\n",s1.percent);

		return 0;
	}


