#include <stdio.h>
void swap(int*, int*);
int main()
        {
                int a = 10, b = 20;
                printf("Before swapping: a = %d b = %d\n",a,b);
                swap(&a,&b);
                printf("In the caller: a = %d b = %d\n",a,b);
                return 0;
        }


void swap(int* x, int* y)
        {
                int t;

                t = *x;
                *x = *y;
                *y = t;

                printf("After Swapping is done inside the function: x = %d y = %d\n",*x,*y);

        }

