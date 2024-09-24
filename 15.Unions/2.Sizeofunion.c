#include<stdio.h>
union Data{
	int i;
	float f;
	double d;
};

int main()
{
	union Data data;
	printf("Size of union: %lu bytes\n\n",sizeof(data));
	
	return 0;
}
