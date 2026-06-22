#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        scanf("%d %s %f", &s[i].roll_no, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}