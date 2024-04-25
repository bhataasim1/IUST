// I was absent on this day
// Write a program in C for the given grammar

// ( or {   ->  4
// ) or }   ->  5
// Digit    ->  6
// +        ->  2
// *        ->  3

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isdigit()

void grammarRules(const char *input, char *output) // const prevents the function from modifying the input string
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '(' || input[i] == '{')
        {
            output[i] = '4';
        }
        else if (input[i] == ')' || input[i] == '}')
        {
            output[i] = '5';
        }
        else if (isdigit(input[i]))
        {
            output[i] = '6';
        }
        else if (input[i] == '+')
        {
            output[i] = '2';
        }
        else if (input[i] == '*')
        {
            output[i] = '3';
        }
        else
        {
            output[i] = input[i];
        }
    }
    output[strlen(input)] = '\0';
}

int main()
{
    char inputString[100];
    char outputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin); // Read a string from the user, fgets reads until newline or EOF and stores the newline character in the string, stdin is the standard input stream

    int index_of_newline = strcspn(inputString, "\n"); // return the index when the newline character is found
    inputString[index_of_newline] = 0;                 // Replace the newline character with null character (0 or '\0' are the same thing in C)

    grammarRules(inputString, outputString);
    printf("Converted string: %s\n", outputString);

    return 0;
}
