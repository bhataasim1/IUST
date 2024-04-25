// Check whether a string is a substring of a given parent string using Pointers

#include <stdio.h>
#include <string.h>

int main()
{
    char parent[100], substring[100];
    char *p, *s;
    int i, j;
    int found=0;

    printf("Enter the parent string: ");
    gets(parent);
    printf("Enter the substring: ");
    gets(substring);

    p = parent;
    s = substring;

    for (i = 0; i < strlen(parent); i++)
    {
        j = 0; // to iterate through the substring
        if (*p == *s)
        {
            while (*(s + j) != '\0')
            {
                if (*(p + j) == *(s + j))
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            if (*(s + j) == '\0')
            {
                found = 1;
                break;
            }
        }
        p++;
    }

    if (found == 1)
    {
        printf("The substring is present in the parent string\n");
    }
    else
    {
        printf("The substring is not present in the parent string\n");
    }

    return 0;
}