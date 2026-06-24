#include <stdio.h>

int main()
{
    int n;
    int m;

    // Reading an integer input
    printf("Enter your integer\n");
    scanf("%i", &n);
    printf("Enter your second integer\n");
    scanf("%i", &m);
    
	// Comparing Integers
	if (n < m)
	{
		printf("The first integer is less than the second\n");
	}
	else if (n > m)
	{
        	printf("The first integer is greater than the second\n");
	}
	else
	{
        	printf("The integers are equal to eachother\n");
	}

}
