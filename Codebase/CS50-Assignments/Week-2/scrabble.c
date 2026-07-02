// This will be the scrabble score giver from CS50 Week-2 Problem set
/* Like Scrabble the user will enter in a string of characters <br>
and the program will return the score of the word based on the letter values */

// Scoring logic for vowel and l, n, r, s, & t are 1 point each
// Scoring logic for d & g are 2 points each
// Scoring logic for b, c, m, & p are 3 points each
// Scoring logic for f, h, v, w, & y are 4 points each
// Scoring logic for k is 5 points
// Scoring logic for j & x are 8 points each
// Scoring logic for q & z are 10 points each

// The program will be case insensitive and will ignore any non-alphabetical characters

// includes
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Prompt the user for a word
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    // Initialize score variable
    int score = 0;

    // Loop through each character in the word
    for (int i = 0; word[i] != '\0'; i++)
    {
        char c = tolower(word[i]); // Convert to lowercase for case insensitivity

        // Check if the character is an alphabet
        if (isalpha(c))
        {
            // Calculate score based on letter values
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'l' || c == 'n' || c == 'r' || c == 's' || c == 't')
            {
                score += 1;
            }
            else if (c == 'd' || c == 'g')
            {
                score += 2;
            }
            else if (c == 'b' || c == 'c' || c == 'm' || c == 'p')
            {
                score += 3;
            }
            else if (c == 'f' || c == 'h' || c == 'v' || c == 'w' || c == 'y')
            {
                score += 4;
            }
            else if (c == 'k')
            {
                score += 5;
            }
            else if (c == 'j' || c == 'x')
            {
                score += 8;
            }
            else if (c == 'q' || c == 'z')
            {
                score += 10;
            }
        }
    }

    // Print the total score
    printf("Score: %d\n", score);
    return 0;
}
