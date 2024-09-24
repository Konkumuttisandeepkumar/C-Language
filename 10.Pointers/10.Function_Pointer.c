#include<stdio.h>

void add(int a,int b)
{
	printf("Addition of %d and %d is: %d\n",a,b,a+b);
}

void subtract(int a,int b)
{
	printf("Subtraction of %d and %d is: %d\n",a,b,a-b);
}

void multiply(int a,int b)
{
	printf("Multiplication of %d and %d is: %d\n",a,b,a*b);
}

int main()
{
	void(*fun_ptr_arr[])(int,int) = {add,subtract,multiply};
	unsigned int ch,a,b;

	printf("Enter Choice: 0 for Addition, 1 for Subtraction and 2 for Multiplication\n");
	scanf("%d",&ch);

	if(ch>2)
	{
		printf("Invalid Entry........!!!\n");
		return 0;
	}

	printf("Enter Any Two Numbers: \n");
	scanf("%d%d",&a,&b);

	(*fun_ptr_arr[ch])(a,b);
	
	return 0;
}
