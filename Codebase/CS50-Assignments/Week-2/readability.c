// This program will determine the users reading level based
// on the text input.
// Logic will derive from how many words the user inputs into a sentance.
// The program will then output the reading level based on the number of words inputted.

#include <stdio.h>
// to determine the grade level of the statement we will use the following formula:
// index = 0.0588 * L - 0.296 * S - 15.8
// where L is the average number of letters per 100 words in the text
// and S is the average number of sentences per 100 words in the text.

int grade_level(char statement[]) 
{
    int letters = 0, words = 1, sentences = 0;
    for (int i = 0; statement[i] != '\0'; i++) 
    {
        if ((statement[i] >= 'a' && statement[i] <= 'z') || (statement[i] >= 'A' && statement[i] <= 'Z')) 
        {
            letters++;
        } 
        else if (statement[i] == ' ') 
        {
            words++;
        } 
        else if (statement[i] == '.' || statement[i] == '!' || statement[i] == '?') 
        {
            sentences++;
        }
    }
    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;
    int index = (int)(0.0588 * L - 0.296 * S - 15.8);
    return index;
}

int main() 
{
    char statement[100];
    printf("Please enter a statement: ");
    scanf("%99[^\n]%*c", statement);
    int grade = grade_level(statement);
    printf("The reading level is: %d\n", grade);
    return 0;
}