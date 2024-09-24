#include <stdio.h>

// Defining the union
union Student {
    char name[100]; // occupies the largest memory space in the union
    int age;
    float percent;
};

int main() {
    // Declaring a variable of type union Student
    union Student s1;

    // Asking for and displaying one member at a time due to union behavior
    printf("\tPlease enter student details of s1\n");

    // Enter and display Student Name
    printf("\nEnter Student Name: ");
    scanf("%s", s1.name);
    printf("Student Name: %s\n", s1.name);

    // Enter and display Student Age (note this will overwrite name)
    printf("\nEnter Student Age: ");
    scanf("%d", &s1.age);
    printf("Student Age: %d\n", s1.age);

    // Trying to access name after assigning age leads to undefined behavior
    printf("\nAfter overwriting student name: %s\n", s1.name); // Undefined behavior

    // Enter and display Student Percentage (this will overwrite age)
    printf("\nEnter Percentage of Student: ");
    scanf("%f", &s1.percent);
    printf("Total Percentage of Student: %.2f\n", s1.percent);

    // Trying to access age after assigning percent leads to undefined behavior
    printf("\nAfter overwriting student age: %d\n", s1.age); // Undefined behavior

    return 0;
}
