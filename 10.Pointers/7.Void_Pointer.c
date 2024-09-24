#include<stdio.h>
int main()
{
	int x=5;
	float y=5.5;

	void *ptr;
	ptr=&x;

	printf("Interger Variable=%d, Address of integer variable=%p\n",*((int*)ptr),ptr);
	
	ptr=&y;
	printf("Float Variable=%.2f, Address of float variable=%p\n",*((float*)ptr),ptr);
	
	return 0;
}



