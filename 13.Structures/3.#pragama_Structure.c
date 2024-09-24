#include<stdio.h>
#pragma pack (1)
struct Student{
        int age;
        char name;
        double percent;
};
int main()
{
        struct Student s1;
        printf("Size of student:%lu bytes\n",sizeof(s1));
        return 0;
}

