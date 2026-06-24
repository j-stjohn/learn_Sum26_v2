// Making a scrabble game 

#include <stdio.h>

char word[30];
char ones[] = {'a','A','e','E','i','I','l','L','n','N','o','O','r','R','s','S','t','T','u','U'};
char twos[] = {'d','D','g','G'};
char threes[] = {'b','B','c','C','m','M','p','P'};
char fours[] = {'f','F','h','H','v','V','w','W','y','Y'};
char fives[] = {'k','K'};
char eight[] = {'j','J','x','X'};
char tens[] = {'q','Q','z','Z'};
int sum = 0;
int scrabble(word);
int main(int argc, char argv[]){
	int n = 0;
	if (argc == 2) {
	
	}
	else {
	printf("Enter your word: ");
	scanf("%s", word);
	scrabble(word);
	}
}
int scrabble(word) {
	while (word[n] != '\0') {
		for (int i = 0; i < sizeof(ones); i++) {
			if (word[n] == ones[i]) { 
				word[n] = 1; }
			if (word[n] == twos[i]) {
				word[n] = 2; }
			if (word[n] == threes[i]) {
				word[n] = 3; }
			if (word[n] == fours[i]) {
				word[n] = 4; }
			if (word[n] == fives[i]) {
				word[n] = 5; }
			if (word[n] == eight[i]) {
				word[n] = 8; }
			if (word[n] == tens[i]) {
				word[n] = 10; } 
		}
		sum = sum + word[n];
       		n++; }
	printf("Total Score: %i\n",sum);
}

