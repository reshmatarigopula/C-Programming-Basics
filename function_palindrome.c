#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == reverse(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}