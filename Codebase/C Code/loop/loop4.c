// Creating a loop program

#include <stdio.h>
#include <unistd.h>

int time = 2;
int main(void)
{
	// creating loop
	for (int loop = 0; loop < 3; loop++)
	{
		printf("meow\n");
		sleep(time);
	}
	return 0;
}
