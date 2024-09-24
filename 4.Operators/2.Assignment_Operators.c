#include<stdio.h>
int a,b;
int main()
{

printf("Enter a values of a&b:");
scanf("%d%d",&a,&b);

printf("The simple assignment of two numbers is : %d\n",a=b);
printf("The plus & assign of two numbers is : %d\n",a+=b);
printf("The minus & assign of two numbers is : %d\n",a-=b);
printf("The multiply & assign of two numbers is : %d\n",a*=b);
printf("The divide & assign of two numbers is : %d\n",a/=b);
printf("The modulus of two numbers is : %d\n",a%=b);

return 0;

}

