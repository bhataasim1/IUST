#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

void generateKeytable(char key[], char keytable[SIZE][SIZE]) {
    int i, j, k, flag = 0;
    char taken[26] = {0};

    // Initialize keytable with zeros
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            keytable[i][j] = 0;
        }
    }

    // Fill in the key
    for (k = 0; k < strlen(key); ++k) {
        if (key[k] == 'J') {
            key[k] = 'I'; // treat 'J' as 'I'
        }
        if (taken[toupper(key[k]) - 'A'] == 0) {
            keytable[flag / SIZE][flag % SIZE] = toupper(key[k]);
            taken[toupper(key[k]) - 'A'] = 1;
            ++flag;
        }
    }

    // Fill the remaining cells with the alphabet
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            if (keytable[i][j] == 0) {
                while (taken[flag - 'A'] == 1) {
                    ++flag;
                }
                keytable[i][j] = flag + 'A';
                taken[flag - 'A'] = 1;
            }
        }
    }
}

void findPosition(char keytable[SIZE][SIZE], char ch, int *row, int *col) {
    if (ch == 'J') {
        ch = 'I'; // treat 'J' as 'I'
    }
    int i, j;
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            if (keytable[i][j] == toupper(ch)) {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

void encrypt(char keytable[SIZE][SIZE], char plaintext[]) {
    int i, j;
    for (i = 0; i < strlen(plaintext); i += 2) {
        int row1, col1, row2, col2;
        findPosition(keytable, plaintext[i], &row1, &col1);
        findPosition(keytable, plaintext[i + 1], &row2, &col2);

        if (row1 == row2) {
            printf("%c%c ", keytable[row1][(col1 + 1) % SIZE], keytable[row2][(col2 + 1) % SIZE]);
        } else if (col1 == col2) {
            printf("%c%c ", keytable[(row1 + 1) % SIZE][col1], keytable[(row2 + 1) % SIZE][col2]);
        } else {
            printf("%c%c ", keytable[row1][col2], keytable[row2][col1]);
        }
    }
}

int main() {
    char key[26];
    char plaintext[100];

    // Input key and plaintext
    printf("Enter the key: ");
    scanf("%s", key);

    printf("Enter the plaintext: ");
    scanf("%s", plaintext);

    // Validate key and plaintext
    for (int i = 0; i < strlen(key); ++i) {
        if (!isalpha(key[i])) {
            printf("Invalid key!\n");
            return 1;
        }
    }

    for (int i = 0; i < strlen(plaintext); ++i) {
        if (!isalpha(plaintext[i])) {
            printf("Invalid plaintext!\n");
            return 1;
        }
    }

    char keytable[SIZE][SIZE];
    generateKeytable(key, keytable);

    printf("\nKeytable:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("%c ", keytable[i][j]);
        }
        printf("\n");
    }

    printf("\nEncrypted Text: ");
    encrypt(keytable, plaintext);

    return 0;
}
