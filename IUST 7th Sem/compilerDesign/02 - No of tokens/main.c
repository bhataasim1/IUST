// Program to count the number of words(takens) in a string

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch, lastChar = '\0';
    int count = 0;
    bool firstWordFound = false, lastCharIsSpace = false;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') // Read the characters until a new line is found
    {
        if (ch == ' ') // If the character is a space
        {
            if (lastChar != ' ' && firstWordFound) // last character was space and next character is symbol then new word is found, so increment the count 
            {
                count++;
                lastCharIsSpace = true;
            }
        }
        else // If the character is not a space
        {
            firstWordFound = true;
            lastCharIsSpace = false;
        }

        lastChar = ch;
    }

    if (firstWordFound && !lastCharIsSpace) // Count the last word if it's not followed by a space
    {
        count++;
    }

    printf("Number of tokens: %d\n", count);

    return 0;
}