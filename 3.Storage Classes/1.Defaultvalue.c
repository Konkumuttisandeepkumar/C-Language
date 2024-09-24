#include<stdio.h>
static int a;
int b;

int main()
{
static int c;
auto int d;
register int e;

printf("The default value of static global variable is: %d\n",a);
printf("The default value of global variablr is: %d\n",b);
printf("The default value of static local variable is: %d\n",c);
printf("The default value of auto variable is: %d\n",d);
printf("The default value of register variable is: %d\n",e);

return 0;
}
