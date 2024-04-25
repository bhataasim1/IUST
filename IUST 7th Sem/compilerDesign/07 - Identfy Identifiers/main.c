// Create a program which reads a text file and identify the identifiers in a given string.

#include <stdio.h>

int main()
{
    FILE *fp;
    char myString[100];
    char str[100];
    int i = 0;
    printf("Enter a string:");
    gets(str);

    while (i < 100)
    {
        if (str[i] == ' ')
            str[i] = '\n';
        i++;
    }
    printf("%s", str);

    printf("\nIdentifiers in the file are:\n");

    fp = fopen("Rules.txt", "r");
    while (fgets(myString, 100, fp))
    {
        printf("%s", myString);
    }

    // if 
}