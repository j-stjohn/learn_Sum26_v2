// Making a scrabble game 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

char word[30];
char ones[] = {'a','A','e','E','i','I','l','L','n','N','o','O','r','R','s','S','t','T','u','U'};
char twos[] = {'d','D','g','G'};
char threes[] = {'b','B','c','C','m','M','p','P'};
char fours[] = {'f','F','h','H','v','V','w','W','y','Y'};
char fives[] = {'k','K'};
char eight[] = {'j','J','x','X'};
char tens[] = {'q','Q','z','Z'};

#define ONES_SIZE (sizeof(ones) / sizeof(ones[0]))
#define TWOS_SIZE (sizeof(twos) / sizeof(twos[0]))
#define THREES_SIZE (sizeof(threes) / sizeof(threes[0]))
#define FOURS_SIZE (sizeof(fours) / sizeof(fours[0]))
#define FIVES_SIZE (sizeof(fives) / sizeof(fives[0]))
#define EIGHT_SIZE (sizeof(eight) / sizeof(eight[0]))
#define TENS_SIZE (sizeof(tens) / sizeof(tens[0]))

int sum = 0;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int scrabble(char word[]);

int main(int argc, char *argv[]) {
	if (argc == 2 && argv[1][0] == 'r') {
		// Generate random 15-character string
		char random_chars[16];
		srand(time(NULL));
		
		for (int i = 0; i < 15; i++) {
			int idx = rand() % 52;  // 26 lowercase + 26 uppercase
			random_chars[i] = letters[idx];
		}
		random_chars[15] = '\0';
		
		printf("Your letters: %s\n", random_chars);
		printf("Make a word from these letters: ");
		scanf("%s", word);
		scrabble(word);
	} else {
		printf("Enter your word: ");
		scanf("%s", word);
		scrabble(word);
	}
	return 0;
}
int scrabble(char word[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		char c = word[i];
		int points = 0;
		
		// Check which point value this character belongs to
		for (int j = 0; j < ONES_SIZE; j++) {
			if (c == ones[j]) { points = 1; break; }
		}
		for (int j = 0; j < TWOS_SIZE; j++) {
			if (c == twos[j]) { points = 2; break; }
		}
		for (int j = 0; j < THREES_SIZE; j++) {
			if (c == threes[j]) { points = 3; break; }
		}
		for (int j = 0; j < FOURS_SIZE; j++) {
			if (c == fours[j]) { points = 4; break; }
		}
		for (int j = 0; j < FIVES_SIZE; j++) {
			if (c == fives[j]) { points = 5; break; }
		}
		for (int j = 0; j < EIGHT_SIZE; j++) {
			if (c == eight[j]) { points = 8; break; }
		}
		for (int j = 0; j < TENS_SIZE; j++) {
			if (c == tens[j]) { points = 10; break; }
		}
		
		sum += points;
	}
	printf("Total Score: %i\n", sum);
	return sum;
}

