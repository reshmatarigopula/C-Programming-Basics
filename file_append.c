#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "\nWelcome to C Programming");

    fclose(fp);

    printf("Data Appended Successfully");

    return 0;
}