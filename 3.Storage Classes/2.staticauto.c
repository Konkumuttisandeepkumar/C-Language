#include<stdio.h>
void function(void);
int main()
{
	function();
	function();
	function();

return 0;
}

void function()
{
auto int a=0;
static int b=0;

a++;
b++;

printf("Auto variable a = %d\t",a);
printf("Static variable b = %d\n",b);

}

