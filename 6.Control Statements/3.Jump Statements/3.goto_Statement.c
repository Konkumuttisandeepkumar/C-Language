#include<stdio.h>
int main()
{
int i=0;
start:
if(i<5)
{
printf("%d\n",i);
i++;
goto start;
}
return 0;
}
