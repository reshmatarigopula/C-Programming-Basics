#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    printf("Default values:\n");
    for(i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}