#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("\nRoll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}