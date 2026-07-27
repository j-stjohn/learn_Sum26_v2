#include <stdio.h>

int main(void)
{
	// Array of ints
	int numbers[] = {20, 500, 10, 5, 100, 1, 50};
	
	int n;
	
	// User Input of a number 
	printf("Number: ");
	scanf("%d", &n);
	
	// Searching user input
	for(int i = 0; i < 7; i++)
	{
		if (numbers[i] == n)
		{
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found\n");
	return 1;
}
