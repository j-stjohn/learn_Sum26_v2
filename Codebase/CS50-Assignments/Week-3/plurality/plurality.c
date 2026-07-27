#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	int votes;
} candidate;

int main (int argc, char *argv[])
{
	// make the president array legnth based on name input into the program
	candidate president[argc];
	// names entered into argv create the candidates
	for (int i = 0; i < argc; i++)
	{
		strcpy(president[i].name,  argv[i]);
	}
	// Get the total number of votes
	printf("Number of Votes:  ");
	int vote_total;
	scanf("%d", &vote_total);
	// enter each vote into an array of strings
	char votes[vote_total][20];
	for (int k = 0; k < vote_total; k++)
	{
		printf("Vote %d:  ", k + 1);
		scanf("%s", votes[k]);
	}
	// find the winner of the election by the the candidate with the most votes
	int max_votes = 0;
	for (int i = 0; i < argc; i++)
	{
		int candidate_votes = 0;
		for (int j = 0; j < vote_total; j++)
		{
			if (strcmp(president[i].name, votes[j]) == 0)
			{
				candidate_votes++;
			}
		}
		president[i].votes = candidate_votes;
		if (candidate_votes > max_votes)
		{
			max_votes = candidate_votes;
		}
	}
	// print the winner of the election
	for (int i = 0; i < argc; i++)
	{
		if (president[i].votes == max_votes)
		{
			printf("Winner:   %s\n", president[i].name);
		}
	}
}



