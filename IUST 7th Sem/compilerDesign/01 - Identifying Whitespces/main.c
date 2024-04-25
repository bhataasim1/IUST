// Program to identify white spaces in a sentence

#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            count++;
        }
    }

    printf("Number of white spaces: %d\n", count);

    return 0;
}