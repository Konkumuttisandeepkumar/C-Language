#include<stdio.h>
int a = 20, b = 25;
int main()
{

if(a<b)
	printf("%d is less than %d\n",a,b);
else
	printf("%d is not less than %d\n",a,b);

if(a>b)
        printf("%d is greater than %d\n",a,b);
else
        printf("%d is not greater than %d\n",a,b);

if(a==b)
        printf("%d is equal to %d\n",a,b);
else
        printf("%d is not equal to %d\n",a,b);

if(a<=b)
        printf("%d is less than or equal to %d\n",a,b);
else
        printf("%d is not less than or equal to %d\n",a,b);

if(a>=b)
        printf("%d is greater than or equal to %d\n",a,b);
else
        printf("%d is not greater than or equal to %d\n",a,b);

if(a!=b)
        printf("%d is not equal to %d\n",a,b);
else
        printf("%d is equal to %d\n",a,b);


return 0;

}
