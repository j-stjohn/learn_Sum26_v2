# Notes Page V 02

> This will serve as the new note-taking file for CS50
> The first area we will dive into is within the short videos from previous weeks
> These videos will serve useful for our development as a Computer Scientist

---

## Week 1

### Data Types

- Within C we have to declare the data type prior to deploying a variable

- `int`: Integer data type. 
    - `1`,`2`,`10`,`10000`, `-1`, `0`, `-1000`, etc
    - Limited by 32 bits

- `char` : Character data type
    - Limited to 1 byte, 8 bits
    - ASCII mapped characters 0 - 127
        - `A` = 65
        - `a` = 97

- `float` : floating point data type

### Operators


### Conditional Statements

### Loops

### Command Line

### Magic Numbers

---

## Week 2

### Functions

Sometimes `main` becomes too cluttered with information to be easily read
We create functions **(procedures, methods or subroutines)** to fulfill this need to shorten main.
These functions are referred to in main, its like creating a program within a program

The function is a *black-box*
    - 0+ inputs with 1 output

Input syntax example
``` C
func(a, b, c);
```

Output example
```bash
z
````
    
Example `add`:

```C
sum = add(3, 6, 7);printf("%i/n", sum);
```

```bash
16
```

When writing functions it is important to be clear obvious names and be well-documented

---

#### We use functions for:

- Organization
    - Breaking up a complex problem into more managable parts

- Simplification
    - Small components tend to be easier to design, implement, and debug.
    - *Many simple cogs to make a complex machine*

- Reusability
    - Functions can be recycled as you only need to write them once and can refer back many times

---

#### Function Declarations

1. Functions must be declared. This tells the compiler to refer to user-written code from before and to repeat that exact code again

2. Function declarations should always go on top of code `main()`

3. Follow a standard form that every function declaration follows


##### Standard Function Declaration

`return-type{color: Green} name{color: Red}(argument-list{color: Blue})`


- The `return-type` is what kind of variable the function will output, what data type the function outputs as

- The `name` of the function

- The `argument-list` is a comma-separated set of inputs to the function. Each has a type and a name.

**Example of Adding Two Integers**

```C
int add_two_ints(int a, int b);
```

- The sum of two integers will also be an integer

- This function has a clear distinct name, the function adds two integers

- There are two inputs into the function so we need to name each variable currently there is nothing important to them so we can name them simply.

**Multiply two floating point numbers**

```C
float mult_two_reals(float x, float y);
```

```C
double mult_two_reals(double x, double y);
```

Lets try to define what occurs in `mult_two_reals()`

```Define
Create double float data type variable called counter
counter equals 0
Input double x is added to itself
add 1 to counter
stop when counter equals double y
return product
```
 
**Example of creating the function** `mult_two_reals`

```C
// includes
##include <cs50.h>
##include <stdio.h>

// declare functions
double mult_two_reals(double x, double y)
{
    double product = x * y;
    return product;
}


int main(void)
{
    // ask user for input
    printf("Give me a real number: ");
    double x = GetDouble();
    printf("Give me another real number: ");
    double y = GetDouble();

    // multiply the numbers together via function call

    double z = mult_two_reals(x, y);

    // output the result

    printf("The product of %d and %d is %d\n", x, y, z);

}

#### Function Miscellany

- Remember functions can have 0 inputs, in this case we use the `void` arguement list

- Functions can also have `void` be the return value to output nothing




