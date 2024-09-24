#include<stdio.h>

void Implicit_Type_Conversion(void);
void Explicit_Type_Conversion(void);

int main()
{

Implicit_Type_Conversion();
Explicit_Type_Conversion();

return 0;
}


void Implicit_Type_Conversion()
{
int a=10;
float b=4.5;
float result;

result = a+b;
printf("The result of implicit type conversion is:%f\n",result);
}

void Explicit_Type_Conversion()
{
int x=10;
float y=4.5;
int res;

res = (int)(x+y);
printf("The result of explicit type conversion is:%d\n",res);
}
