#include <stdio.h>

void coins_returned(int change)
{
	int coins[] = {25, 10, 5, 1};
	int counts[4] = {0};

	for (int i = 0; i < 4; i++)
	{
		counts[i] = change / coins[i];
		change %= coins[i];
	}

	printf("Quarters: %i\n", counts[0]);
	printf("Dimes:    %i\n", counts[1]);
	printf("Nickels:  %i\n", counts[2]);
	printf("Pennies:  %i\n", counts[3]);
}

int main(void)
{
	int change = 0;
	printf("Enter the Change Owed in Cents: ");
	if (scanf("%i", &change) == 1)
	{
		coins_returned(change);
	}
	return 0;
}
