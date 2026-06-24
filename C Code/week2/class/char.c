#include <stdio.h>

int main(void)
{
    char word[1024];
    char ciword[1024];
    int cipher;

    printf("Enter the word: ");
    scanf("%1023s", word);

    printf("Enter the cipher level: ");
    scanf("%d", &cipher);

    int length = 0;

    while (word[length] != '\0')
    {
        length++;
    }

    for (int n = 0; n < length; n++)
    {
        if (word[n] >= 'a' && word[n] <= 'z')
        {
            ciword[n] =
                ((word[n] - 'a' + cipher) % 26) + 'a';
        }
        else if (word[n] >= 'A' && word[n] <= 'Z')
        {
            ciword[n] =
                ((word[n] - 'A' + cipher) % 26) + 'A';
        }
        else
        {
            ciword[n] = word[n];
        }

        printf("%c -> %c\n", word[n], ciword[n]);
    }

    ciword[length] = '\0';

    printf("Ciphered word: %s\n", ciword);

    return 0;
}
