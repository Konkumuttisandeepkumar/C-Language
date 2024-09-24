#include<stdio.h>
int a = 20,b = 25;
int main()
{

if(a>30 && b>30)
		printf("Both values a & b are greater than 30\n");
else
		printf("Both values a & b are not greater than 30\n");

if(a>30 || b>30)
                printf("Any one of the given values are greater than 30\n");
else
                printf("Both values a & b are not greater than 30\n");

if(!(a>30 && b>30))
                printf("Both values a & b are greater than 30\n");
else
                printf("Both values a & b are not greater than 30\n");


return 0;

}
