// Mario Staircase CS50 v4
// Prints both staircases

#include <stdio.h>
#include <unistd.h>

int time = 1;
int main(void)
{
	int height;
	do
	{
		printf("How tall is the tower for Mario?\n");
		scanf("%d", &height);
	} 
	while (height < 1);
		for (int i = 1; i <= height; i++)
		{
    			// print spaces on left
    			for (int j = 0; j < height - i; j++)
    			{
        			printf(" ");	
    			}
    			// print hashes on left
    			for (int j = 0; j < i; j++)
    			{
        			printf("#");
			}
		   	printf("  ");
			for (int j = 0; j < i; j++)
			{
				printf("#");
			}
			printf("\n");
			sleep(time);
		}
}
