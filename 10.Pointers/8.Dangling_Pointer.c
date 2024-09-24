#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = (int*)malloc(sizeof(int));
	*ptr=10;

	free(ptr);

	printf("%d\n",*ptr);
	printf("%p\n",ptr);

	ptr = NULL;
	printf("After removing dangling pointer............!!!\n");

	if(ptr==NULL)
		{
			printf("Pointer is NULL and safe to use.\n");
		}
return 0;
}
