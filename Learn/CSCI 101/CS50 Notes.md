# Week 0
---
## Scratch

Very basic level programming language to teach basics of making working programs

### Conditionals

>  Essential building block of programming, where the program looks to see if a specific condition has been met. If a condition is met, the program does something.

# Week 1

## Source Code
---
- Machines only understand binary. Humans write source code, aka programming. But, machines only understand machine code.
- We write source code then we run that programming through a compiler to translate readable text into machine code.

## VS Code for CS101
---
-   Text editor for this course is *Visual Studio Code*  , it can accessed here:  
		https://cs50.dev/
-    VS Code is used because it can handle nearly every single programming language.

## Hello World
---

> We will make our first introductory program called `hello`

```CLI
$ code hello.c
$ Make hello
$ ./hello
```

-  ``code hello.c`` creates a file in vs code and deploys the text editor to begin coding in C.
-  `make hello` compiles the code written in the text file and creates an executable file called `hello`
- `./hello` executes the program `hello` 

> We will now write the code for `hello`

```VSCodeEditor
// A program that says hello to the world

#include <stdio.h>

int main(void)
{
	printf("hello, world\n");
}
```

> IMPORTANT NOTE FOR C, using `//` indicates to the machine that the information in that line can be ignored by the compiler as it is there to leave notes in the code

```CS50
- Note that every single character above serves a purpose. If you type it incorrectly, the program will not run. `printf` is a function that can output a line of text. Notice the placement of the quotes and the semicolon. Further, notice that the `\n` creates a new line after the words `hello, world`.
    
- Clicking back in the terminal window, you can compile your code by executing `make hello`. Notice that we are omitting `.c`. `make` is a build tool that will compile our `hello.c` file and turn it into a program called `hello`. If executing this command results in no errors, you can proceed. If not, double-check your code to ensure it matches the above.
- Now, type `./hello` and your program will execute saying `hello, world`.
- Now, open the file explorer on the left. You will notice that there is now both a file called `hello.c` and another file called `hello`. `hello.c` contains your source code that can be read by humans and the compiler. `hello` is an executable file containing machine code that the computer can run directly.
```
## From Scratch to C
---
-  Scratch used `say` to display any text on the screen, but in C, we use a function called `printf`
-  Our code invokes this function by
	``` printf("hello,world\n"); ```
	Notice how that when printf is called the statement is surrounded by double quotes and ends with `;`
-  There are many other types of endings to put on this function to receive different outputs
	```
	\n   Create a new line
	\r   Return to the start of a line
	\"   Print a double quote
	\'   Print a single quote
	\\   Print a backslah
	```
## Header Files and CS50 Manual Pages
---
- The statement at the start of this code `#include <stdio.h>` is a special command that tells the compiler to use the capabilities of the *library* called `stdio.h`, h being a *header file*. `printf` is apart of `stdio.h` library.
-  A library is a collection of code by someone, they are often pre-written code and functions to utilize in current code.
-  For this course we will also use a library called `cs50.h` 

## Hello, You
---
One of the early Scratch programs we wrote asked the user "What's your name?", the program then responded with "hello, name"
We can do the same in C, we will add in some modifications to our code.
```VSCodeEditor
// get_string and printf with incorrect placeholder

#include <cs50.h>
#include<stdio.h>

int main(void)
{
	string answer = get_string("What's your name? ");
	printf("hello, answer\n");
}
```
The `get_string` function is used to get a string from the user then the variable `answer` is passed to the `printf` function

> We notice multiple errors when running this code.
> `string` & `get_string` are not recognized by the compiler.  We need to add the library `cs50.h` . `answer` is lastly not provided as intended.

```VSCodeEditor
// get_string and printf with %s

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
```

## Linux
---
-  We have been using CLI to `make` our program
-  CLI is more useful than GUI for executing commands and working with files
-  Common terminal commands
	- `cd` changing directory folders
	- `cp` copying files and directories
	- `ls` for listing files in a directory
	- `mkdir` for making a directory
	- `mv` for moving files and directories
	- `rm` for removing files
	- `rmdir` for removing directories

## Conditionals
---
-  A common building block in within Scratch is *conditionals* 
-  C is very much capable to have conditionals, statements are made as such:

```C
// Conditionals that are mutually exclusive

if (x < y)
{
	printf("x is less than y\n");
}
else
{
	printf("x is not less than y\n");
}
```

```C
// Conditional that isn't necessary

if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else if (x == y)
{
    printf("x is equal to y\n");
}
```

```C
// Compare integers

if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else
{
    printf("x is equal to y\n");
}
```


## Data Types

There are many different data types available within C but these are the most common

``` 
bool
char
float
int
long
string
...
```

##### *[[C Data Types]]*

---
## Format Codes

Previously we used a plaveholder `%s` for a string in `printf`. This is called a format code

`printf` has many format codes, here is a list common use format codes:

```C
%c     // for char variable
%f     // for floating point variables
%i     // for integer variables
%li    // for long integer variables
%s     // for string variables
```

## Variables

-  Assigning integers: ` int counter = 0 `
	-   ` counter ` is the variable in this statement
-  C can also be programed to add one to ` counter ` as well
	-  ` counter = counter + 1; `
-  This can be simplified as such:
```
counter += 1;
	\/
counter++;

This can also be written in reverse as

counter--;
```
---
# Week 2 - Arrays
---
## Debugging

-  Mistakes are made in coding
-  *Debugging* is the act of finding and removing bugs from code
-  A human method *debugging* code is by saying the actions to be completed out loud
	-  Re-Reading code word-for-word out loud may assist in correcting some spelling and syntax errors

## Compiling

> A compiler is a computer program that converts human readable source code into machine code to be understood by a computer.

-  Compiling is done in 4 stages
	1. Pre-processing: This is including your header files into your file for the complier to know to refer to the specific libraries for needed functions
	2. Compiling: This is where the compiler converts source code into the machine specific assembly language.
	3.  Assembling: An assembler (tool made in the compiler toolchain), converts the Assembly language into your machine code to be ran as binary.
	4.  Linking: Included libraries are then stitched into your binary instructions so that way the machine understands library specific functions.

## Arrays

-  Many different data types such as `bool`,`int`,`char`,`string`, etc
- Each data type requires a certain amount of system resources (these are typical sizes in the CS50 environment):
	- `bool` 1 byte
	- `int` 4 bytes
	- `long` 8 bytes
	- `float` 4 bytes
	- `double` 8 bytes
	- `char` 1 byte
	- `string` ? bytes

We set up an array by multiple different methods in C

```C
type var[n]; // the type of variable, the variable, and the depth of the array in []

type var[] = {n0,n1,...}; // the depth is set by the amount of data in the variable 
```

## Strings

> Strings are not found originally in C, they have to be created. This can easily be done in the cs50 library

A string is a character array in C, as quite literally the letters of a word are characters strung together.

```C
// A string variable is created as such
char variable[] = "word";
char variable[] = {'w','o','r','d','\0'};
```

### ASCII Codes

> Pronounced "Ask-key Codes"

-  These codes are denoted with `%c` and `%i` when printing.
	-  `%c` will give the char
		-  This is useful for a loop
		
		```C
		// This program is useful for counting the chars
		// in a word.
		#include <stdio.h>
		int main(void) {
			char word[] = "Hello";
			int n = 0;
			while (word[n] != '\0') {
			n++; }
			printf("Word:  %s\nCount: %i\n", word, n);
		}
		```
## Command Line Arguments

We can use CLI to pass arguments directly into the program

```C
#include <stdio.h>

// instead of 
int main(void){
	char word[30];
	printf("Enter your word: ");
	scanf("%s", word);
	printf("Hello, %s!\n", word);
}
// we will use
int main(int argc, char argv[]) {
	if (argc == 2) {
		printf("Hello, %s\n", argv[1]);
		}
	else {
		printf("Hello, World!\n");
		}
}
```

> Something to notice is that the program knows both `argc` & `argv` without declaring them in the program.

So our program syntax would look something along the lines of:

```shell
./hello Jacob
...
Hello, Jacob!

./hello 1.0
...
Hello, World!

```

#### argc & argv

-  `argc` argument count and `argv` argument vector are used to handle command line inputs for the `main` function.
-  `argc` represents the number of arguments provided, including the program name itself.
-  `argv` is a character array for the program to accept CL input

