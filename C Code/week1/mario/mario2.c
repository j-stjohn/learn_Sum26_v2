// This is a program from CS50 week 1 problem set to print out a jumping gap
// from Mario world 1-1 

#include <stdio.h>
int time =  1;
int main(void)
{
	int MaxHeight;
	do
	{
		printf("How tall is the tower for Mario?")
		scanf("%d", &height);
	}	
	for (int i = 1; i <= height; i++)
	{
    		for (int j = 0; j < i; j++)
    		{
        		printf("#");
    		}
    		printf("\n");
		sleep(time);
	}
}
