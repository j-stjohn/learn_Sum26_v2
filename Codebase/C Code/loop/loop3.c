// Creating a loop program

#include <stdio.h>
#include <unistd.h>

int time = 2;
int main(void)
{
	// creating loop
	int loop = 3;
	while (loop > 0)
	{
		printf("meow\n");
		loop--;
		sleep(time);
	}
	return 0;
}
