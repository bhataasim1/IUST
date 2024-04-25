// Program to check if a number is a palindrome
// 30th November 2023

#include <stdio.h>

int main()
{
    int n, r, rev = 0, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n; // Preserving the value of n before it becomes 0. We need this value to compare with the reversed number

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    printf("Reverse of %d is %d\n", m, rev);

    if (rev == m)
        printf("The number is palindrome.\n");
    else
        printf("The number is not palindrome.\n");

    return 0;
}
