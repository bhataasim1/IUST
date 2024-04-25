// Program to check if a string is a palindrome - using loops

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string you want to check: ");
    gets(str); // Reads the line with spaces

    int len = strlen(str);
    int i = 0; // iterating from the start
    int j = len - 1; // iterating from the end
    int flag = 0;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
}