#include<stdio.h>
struct Student{
        int age;
	char name;
        double percent;
};

int main()
{
	struct Student s1;
	printf("Size of structure student: %lu bytes\n", sizeof(s1));
	printf("Size of structure student: %lu bytes\n", sizeof(struct Student));

	printf("Size of each variable inside the structure (char): %lu bytes\n", sizeof(s1.name));
	printf("Size of each variable inside the structure (int):%lu bytes\n", sizeof(s1.age));
	printf("Size of each variable inside the structure (double):%lu bytes\n", sizeof(s1.percent));
	
	return 0;
}
