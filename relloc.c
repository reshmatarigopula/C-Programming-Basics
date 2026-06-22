#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, new_n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Enter new size: ");
    scanf("%d", &new_n);

    ptr = (int*)realloc(ptr, new_n * sizeof(int));

    printf("Enter remaining elements:\n");
    for(i = n; i < new_n; i++)
        scanf("%d", &ptr[i]);

    printf("Elements are:\n");
    for(i = 0; i < new_n; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}