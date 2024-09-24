#include<stdio.h>

void increment(void);
void decrement(void);
int main()
{

increment();
decrement();

return 0;

}

void increment()
{

int a = 5,b = 5,prefix = 0,postfix = 0;


prefix = ++a;
postfix = b++;

printf("Prefix Increment : %d\n",prefix);
printf("Postfix Increment : %d\n",postfix);
}

void decrement()
{

int c = 5,d = 5,prefix = 0,postfix = 0;


prefix = --c;
postfix = d--;

printf("Prefix Decrement : %d\n",prefix);
printf("Postfix Decrement : %d\n",postfix);
}

