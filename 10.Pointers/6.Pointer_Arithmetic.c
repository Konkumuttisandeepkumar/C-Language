#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};
	int *ptr = arr;
	
	printf("Intial pointer address: %p, Value: %d\n",ptr,*ptr);
	
	ptr++;
	printf("After ptr++:\nAddress: %p, Value : %d\n",ptr,*ptr);

	ptr += 2;
        printf("After ptr += 2:\nAddress: %p, Value : %d\n",ptr,*ptr);

	ptr--;
        printf("After ptr--:\nAddress: %p, Value : %d\n",ptr,*ptr);

	int *ptr2=&arr[4];
	int diff = ptr2-ptr;
	printf("Difference between ptr2 and ptr: %d elements\n",diff);

	return 0;
}

