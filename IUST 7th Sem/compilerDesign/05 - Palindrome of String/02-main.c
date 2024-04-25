// Program to check if a string is a palindrome - using strcmp() and strrev() functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);

    strcpy(rev, str); // Copying str to rev

    strrev(rev); // Reversing the string rev

    if (strcmp(str, rev) == 0) // if str and rev are equal, strcmp() returns 0, else it returns a non-zero value
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");

    return 0;
}