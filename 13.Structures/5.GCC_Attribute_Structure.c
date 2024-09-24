#include<stdio.h>
struct Student{
        int age;
        char name;
        double percent;
}__attribute__((packed));
int main()
{
        struct Student s1;
        printf("Size of student:%lu bytes\n",sizeof(s1));
        return 0;
}

