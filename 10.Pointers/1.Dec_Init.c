#include <stdio.h>

int main() {

        int num = 10;       
	int *ptr;       
	ptr = &num;         

	printf("Value of num: %d\n", num);    
        printf("Value at *ptr: %d\n", *ptr);  
	printf("Address of num: %p\n", ptr);   
       	printf("Address of num (using &): %p\n", &num);

 	return 0;

             }
