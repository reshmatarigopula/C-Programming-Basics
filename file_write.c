#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello GitHub");

    fclose(fp);

    printf("Data Written Successfully");

    return 0;
}