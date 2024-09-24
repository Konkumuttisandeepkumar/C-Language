#include<stdio.h>
int add(int a,int b);

int main()
{
int sum=add(5,3);
printf("sum:%d\n",sum);
return 0;
}

int add(int a,int b)
{
return a+b;
}
