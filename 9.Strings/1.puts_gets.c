#include<stdio.h>
#define MAX 50
int main()
{
	char str[MAX];
	fgets(str,MAX,stdin);
	gets(str);
	printf("string is: \n");
	puts(str);
	return 0;
}
