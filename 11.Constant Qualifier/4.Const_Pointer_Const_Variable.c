#include<stdio.h>
int main()
{
        int i=10;
        int j=20;

        const int* const ptr=&i;

        printf("ptr=%d\n",*ptr);

//        *ptr=100;
//	ptr=&j;
        return 0;
}

