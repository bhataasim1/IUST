// Write a program in C to check whether a statement entered is a comment or not!
// // This is a comment
// /* This is a multi-line comment */


#include <stdio.h>
#include <string.h>

int main()
{
    char statement[100];
    int length = 0;

    printf("Enter a statement: ");
    gets(statement);

    length = strlen(statement);

    // Checch if a statement starts with // 
    if (statement[0] == '/' && statement[1] == '/')
    {
        printf("The statement is a single line comment.\n");
    }

    // Check if a statement starts with /* and ends with */
    else if ((statement[0] == '/' && statement[1] == '*') && (statement[length - 2] == '*' && statement[length - 1] == '/'))
    {
        printf("The statement is a multi-line comment.\n");
    }

    // Default case
    else
    {
        printf("The statement is not a comment.\n");
    }
    return 0;
}