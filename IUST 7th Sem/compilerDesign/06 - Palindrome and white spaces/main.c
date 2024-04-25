// Write a program that checks if a sentence is a palindrome or not.
// This program ignores the white spaces in the sentence. For example, "ab b a" is a palindrome although it is not a palindrome if we consider the white spaces.

#include <stdio.h>
#include <string.h>

// Function to remove all spaces from a given string
void removeSpaces(char *str) // *str is a pointer to the first character of the string
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the string
}

int main()
{
    char str[100];
    printf("Enter a string you want to check: ");
    gets(str); // Reads the line with spaces

    removeSpaces(str); // Remove spaces from the string

    int len = strlen(str);
    int i = 0;       // iterating from the start
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
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}
