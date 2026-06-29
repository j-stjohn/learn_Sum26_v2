// Mario staircase — CS50 Week 1
// Prints a right-aligned staircase of # characters

#include <stdio.h>
#include <unistd.h>

int time = 1;

int main(void)
{
    int height;

    // --- DO-WHILE LOOP ---
    // A do-while loop always executes the body at least once,
    // then checks the condition. This is useful for input validation
    // because you need to ask the user before you can check their answer.
    //
    // Structure:
    //   do
    //   {
    //       body
    //   } while (condition);
    //
    // The loop keeps repeating as long as the condition is true.
    // Here we repeat until the user gives a number between 1 and 8.

    do
    {
        printf("How tall is the tower for Mario? ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    // --- OUTER FOR LOOP ---
    // A for loop has three parts inside the parentheses:
    //
    //   for (initialization; condition; update)
    //
    // initialization: runs once at the start — sets i to 1
    // condition:      checked before every iteration — keep going while i <= height
    // update:         runs after every iteration — i++ means add 1 to i
    //
    // So this loop counts i from 1 up to height, one row per iteration.

    for (int i = 1; i <= height; i++)
    {
        // --- INNER FOR LOOP ---
        // This loop runs j from 0 up to i (not including i).
        // On row 1: prints 1 hash
        // On row 2: prints 2 hashes
        // On row 3: prints 3 hashes
        // ...and so on.
        //
        // Notice j starts at 0, not 1. This is called zero-based counting
        // and is standard in C. The condition j < i (not j <= i) compensates.

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");   // move to the next line after each row
        sleep(time);    // pause 1 second (remove this if it feels slow)
    }
}
