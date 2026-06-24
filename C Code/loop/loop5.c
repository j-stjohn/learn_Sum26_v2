// Creating a loop program

#include <stdio.h>
#include <unistd.h>

int time = 2;
int main(void)
{
	// getting user input
	int n;
	do
	{
		printf("On a scale from 1 - 10 how noisy is the cat today\n\b");
		scanf("%d\b", &n);
		if (n > 10)
		{
			n = 10;
		}
	}
	while (n < 0);	
	// creating loop
	for (int loop = 0; loop < n; loop++)
	{
		printf("meow\n");
		sleep(time);
	}
	return 0;
}
