#include <stdio.h>

int isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isEven(num))
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}