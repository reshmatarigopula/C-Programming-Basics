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
    struct Student *ptr = &s;

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}