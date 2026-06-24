#include <stdio.h>

int main(void)
{
	// What is the word?
	printf("How many characters is your word? ");
	int count;
	scanf("%i", &count);
	char word[count];
       	printf("Enter the word of your choosing:  ");
	scanf("%s", word);
	printf("Your word is:                     %s\n", word);
	// Adding in word encoder
	
}
