// Write a program in C for the given grammar

// ( or {   ->  4
// ) or }   ->  5
// Digit    ->  6
// +        ->  2
// *        ->  3

// Further in the output if you encounter:
// consecutive 6s -> 6
// 626 ->  6
// 636 ->  6
// 465 ->  6

// Example Question:
// (D+D) || (D*D) || (D)
// {2 + (3 + 4) +5}
// {2 + 7 + 5}
// {14} - Reseamble (D)

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

void reduceRule(const char *input, char *output)
{
    int j = 0; // Index for the output string

    for (int i = 0; input[i] != '\0';)
    {
        // Check for '465' pattern
        if (input[i] == '4' && input[i + 1] == '6' && input[i + 2] == '5')
        {
            output[j++] = '6';
            i = i + 3; // Skip over processed characters
        }

        // Check for '626' and '636' patterns
        else if (input[i] == '6' && (input[i + 1] == '2' || input[i + 1] == '3') && input[i + 2] == '6')
        {
            output[j++] = '6';
            i = i + 3; // Skip over processed characters
        }

        // Check for consecutive '6's
        else if (input[i] == '6' && input[i + 1] == '6')
        {
            output[j++] = '6';
            i = i + 2; // Skip over processed characters
        }

        // Default case, just copy the character
        else
        {
            output[j++] = input[i++];
        }
    }
    output[j] = '\0';
}

int main()
{
    char inputString[100];
    char tokenString[100];
    char resultString[100];
    char temp[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin); // Read a string from the user, fgets reads until newline or EOF and stores the newline character in the string, stdin is the standard input stream

    int index_of_newline = strcspn(inputString, "\n"); // return the index when the newline character is found
    inputString[index_of_newline] = 0;                 // Replace the newline character with null character (0 or '\0' are the same thing in C)

    grammarRules(inputString, tokenString);
    printf("Converted string: %s\n", tokenString);

    // reduceRule(tokenString, resultString); // delete this line after explaining

    strcpy(temp, tokenString); // Initialize temp with the Token string
    while (1)
    {
        reduceRule(temp, resultString);

        // Check if further simplification is possible
        if (strcmp(temp, resultString) == 0)
        {
            break; // Stop if no changes
        }

        // Otherwise, update temp and print the intermediate result
        strcpy(temp, resultString);
        printf("Middle Iterations: %s\n", resultString);
    };

    printf("Checked string: %s\n", resultString);

    return 0;
}