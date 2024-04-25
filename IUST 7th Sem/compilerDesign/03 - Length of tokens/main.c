#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch;
    int count = 0, tokenLength = 0;
    bool isSpace = true;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') // Read the characters until a new line is found
    {
        if (ch == ' ') // If the character is a space
        {
            if (!isSpace) // End of a token
            {
                count++; // Increment the word count
                printf("Length of token %d: %d\n", count, tokenLength);
                tokenLength = 0; // Reset the length for the next token
            }
            isSpace = true;
        }
        else // If the character is not a space
        {
            tokenLength++; // Increment the length of the current token
            isSpace = false;
        }
    }

    if (!isSpace) // If the last character is not a space, count the last word
    {
        count++;
        printf("Length of token %d: %d\n", count, tokenLength);
    }

    printf("Number of tokens: %d\n", count);

    return 0;
}
