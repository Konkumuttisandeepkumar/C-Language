#include<stdio.h>
int main()
{
	int numbers[5]={1,2,3,4,5};

	int totalsize = sizeof(numbers);
	int elementsize = sizeof(numbers[0]);
	int numelements = sizeof(numbers)/sizeof(numbers[0]);

	printf("Totsl size of the array (in bytes): %d\n",totalsize);
	printf("Size of a single element (in bytes): %d\n",elementsize);
	printf("Number of elements in the array: %d\n",numelements);

	return 0;
}
