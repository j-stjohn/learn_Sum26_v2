// Comparing against lowercase char
/* This is a modification of the cs50 agree.c program
   we are not using the cs50.h library */

#include <stdio.h>

// introduce variable
int main()
{
	char c;
	// Prompt user
	printf("Do you agree that 6 is smaller than 7?\n");
	scanf("%c", &c);
	if (c == 'y' || c == 'Y')
	{
	  printf("You are correct!\n");
	}
	else if (c == 'n')
	{
	  printf("You are incorrect :(\n");
	}
	else
	{
	  printf("Incorrect syntax\n");
	}
}	
