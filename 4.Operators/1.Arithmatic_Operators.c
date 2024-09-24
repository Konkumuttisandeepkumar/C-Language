#include<stdio.h>
int a,b,mod;
float sum,sub,mul,div;
int main()
{

printf("Enter a values of a&b:");
scanf("%d%d",&a,&b);

mod=a%b;

printf("The addition of two numbers is : %f\n",sum=a+b);
printf("The subtraction of two numbers is : %f\n",sub=a-b);
printf("The multiplication of two numbers is : %f\n",mul=a*b);
printf("The division of two numbers is : %f\n",div=a/b);
printf("The modulus of two numbers is : %d\n",mod);

return 0;

}
