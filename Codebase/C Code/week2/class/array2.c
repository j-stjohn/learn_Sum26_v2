#include <stdio.h>

int main(void)
{
    // Clear screen and move cursor to top-left
    printf("\e[1;1H\e[2J");

    int score;
    int sum = 0;
    int count = 0;

    while (1)
    {
        printf("Enter score #%d (-1 to finish): ", count);
        scanf("%d", &score);

        if (score == -1)
        {
            break;
        }
	sum += score;
        count++;
    }

    if (count > 0)
    {
        printf("Average: %.2f\n", sum / (float)count);
    }
    else
    {
        printf("No scores entered.\n");
    }

    return 0;
}
