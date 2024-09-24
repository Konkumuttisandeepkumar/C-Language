#include<stdio.h>
int main()
{
	int i=10;
	int j=20;

	int* const ptr=&i;
	
	printf("ptr=%d\n",*ptr);
	*ptr=100;
	printf("ptr=%d\n",*ptr);

//	ptr=&j;
	return 0;
}
