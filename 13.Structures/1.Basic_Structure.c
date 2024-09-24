#include<stdio.h>
struct Student{
	char name[100];
	int age;
	float percent;
};

int main()
{
	struct Student s1;

	printf("Please enter student details of s1\n");

	printf("Enter Student Name: ");
	scanf("%s",s1.name);

	printf("Enter Student Age: ");
        scanf("%d",&s1.age);

	printf("Enter Percentage of Student: ");
        scanf("%f",&s1.percent);

	printf("Entered student details of s1 are\n");
	printf("Student Name: %s\n",s1.name);
	printf("Student Age: %d\n",s1.age);
	printf("Total Percentage of Student: %.2f\n",s1.percent);

	return 0;
}
