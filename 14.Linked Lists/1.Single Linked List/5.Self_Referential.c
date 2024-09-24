#include <stdio.h>
struct mystruct {
	int a;
	struct mystruct *b;  // Added pointer to next struct
};

int main() 
{
   //Create struct instances and pointers to them
    struct mystruct x = {10, NULL}, y = {20, NULL}, z = {30, NULL};
    struct mystruct *p1, *p2, *p3;

    // Assign pointers
    p1 = &x;
    p2 = &y;
    p3 = &z;

    // Set the 'b' field to point to the next struct
    x.b = p2;
    y.b = p3;

    // Print the details using correct format specifiers
    printf("Address of x: %p a: %d Address of next: %p\n", (void *)p1, x.a, (void *)x.b);
    printf("Address of y: %p a: %d Address of next: %p\n", (void *)p2, y.a, (void *)y.b);
    printf("Address of z: %p a: %d Address of next: %p\n\n", (void *)p3, z.a, (void *)z.b);

    return 0;
}
