#include <stdio.h>

int main() {
    int n;
    int m;

    // Reading an integer input
    printf("Enter your integer\n");
    scanf("%i", &n);
    printf("Enter your second integer\n");
    scanf("%i", &m);
    
    // Comparing Integers
    if (n > m)
    {
	printf("The first input is larger than the second\n");
    }
}
