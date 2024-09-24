#include<stdio.h>
#pragma pack (1)
struct Student{
        double percent;
	int age;
	char name;
};
int main()
{
        struct Student s1;
        printf("Size of student:%lu bytes\n",sizeof(s1));
        return 0;
}

