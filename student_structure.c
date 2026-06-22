#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}