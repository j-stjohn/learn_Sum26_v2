// This program encrypts a message using a substitution key provided on the command line.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char input[100];
    char key[27];

    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must be 26 characters long.\n");
        return 1;
    }

    strcpy(key, argv[1]);

    printf("Enter the word to encrypt: ");
    scanf("%99s", input);

    for (size_t i = 0; i < strlen(input); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (input[i] == alphabet[j])
            {
                input[i] = key[j];
                break;
            }
        }
    }

    printf("Encrypted message: %s\n", input);
    return 0;
}