#include <stdio.h>

int main(void)
{
    printf("Enter the height of the tower Mario wishes to climb: ");
    int height;
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}