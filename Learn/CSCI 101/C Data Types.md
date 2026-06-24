# C Data Types & Variables Learning Outline

## 1. Introduction to Data Types in C

### Key Concept
- Unlike modern languages such as:
  - PHP
  - JavaScript
- C requires explicit data type declarations for variables.

### Why It Matters
- C is a statically typed language.
- The compiler must know:
  - how much memory to allocate
  - how to interpret stored data

### Core Idea
- Every variable must have:
  1. A data type
  2. A variable name

---

# 2. Integer Data Types

## `int`

### Purpose
- Stores whole numbers:
  - Positive
  - Negative
  - Zero

### Examples
```c
int age;
int score = 100;
```

### Memory Size
- `4 bytes`
- `32 bits`

### Integer Range
```text
-2^31 to 2^31 - 1
```

Approximate range:
```text
-2 billion to +2 billion
```

### Important Concepts
- Half of the bit range stores:
  - negative values
- Half stores:
  - positive values

---

## `unsigned int`

### Purpose
- Stores only positive whole numbers.

### Benefit
- Doubles the positive range.

### Tradeoff
- Cannot store negative numbers.

### Range
```text
0 to 2^32 - 1
```

Approximate range:
```text
0 to 4 billion
```

### Example
```c
unsigned int population;
```

### Vocabulary
- `unsigned` is a **qualifier**
- Other qualifiers include:
  - `short`
  - `long`
  - `const`

---

# 3. Character Data Type

## `char`

### Purpose
- Stores a single character.

### Examples
```c
char letter;
char grade = 'A';
```

### Memory Size
```text
1 byte = 8 bits
```

### Range
```text
-128 to 127
```

---

## ASCII Encoding

### Key Concept
Characters are stored as numbers internally.

### Important ASCII Values
| Character | ASCII Value |
|---|---|
| `A` | 65 |
| `a` | 97 |
| `0` | 48 |

### Important Distinction
```text
'0' != 0
```

- `'0'` is a character
- `0` is an integer

---

# 4. Floating Point Numbers

## `float`

### Purpose
- Stores decimal numbers.

### Examples
```c
float pi = 3.14;
float temperature = 72.5;
```

### Memory Size
```text
4 bytes = 32 bits
```

---

## Precision Limitation

### Key Concept
Floats have limited precision because:
- only 32 bits are available

### Result
- Long decimal values lose accuracy.

### Example
```text
3.141592653589793...
```

A float cannot store every decimal digit accurately.

---

# 5. Double Precision Numbers

## `double`

### Purpose
- Stores decimal numbers with greater precision.

### Memory Size
```text
8 bytes = 64 bits
```

### Benefits
- More accurate decimal storage
- Better for scientific calculations

### Example
```c
double precise_pi = 3.141592653589793;
```

### When to Use
Use `double` when:
- high precision matters
- many decimal places are required

---

# 6. The `void` Type

## What is `void`?

### Key Concept
- `void` is a type
- but NOT a data type for variables

### Invalid Usage
```c
void x; // invalid
```

---

## Void Return Type

### Meaning
A function returns nothing.

### Example
```c
void greet(void)
{
    printf("Hello\n");
}
```

### Common Example
```c
printf();
```

- Prints output
- Does not return a useful value

---

## Void Parameters

### Example
```c
int main(void)
```

### Meaning
- `main` takes no arguments

---

# 7. CS50 Library Data Types

## Including the Library

```c
#include <cs50.h>
```

Required for:
- `bool`
- `string`

---

# 8. Boolean Data Type

## `bool`

### Purpose
Stores:
- `true`
- `false`

### Example
```c
bool is_running = true;
```

### Important Note
- Boolean is NOT built into standard C in CS50 context.
- Requires:
```c
#include <cs50.h>
```

---

# 9. String Data Type

## `string`

### Purpose
Stores:
- words
- sentences
- collections of characters

### Example
```c
string name = "Jacob";
```

### Important Note
Requires:
```c
#include <cs50.h>
```

### Key Concept
A string is essentially:
```text
multiple characters grouped together
```

---

# 10. Variable Creation

## Basic Syntax

### Structure
```c
type variable_name;
```

### Example
```c
int number;
char letter;
```

---

# 11. Declaring Multiple Variables

## Same Type Variables

### Example
```c
int height, width;
```

Equivalent to:
```c
int height;
int width;
```

---

## Multiple Float Variables

### Example
```c
float sqrt2, sqrt3, pi;
```

---

# 12. Variable Assignment

## Assigning Values

### Example
```c
int number;
number = 17;
```

### Process
1. Declare variable
2. Assign value later

---

# 13. Variable Initialization

## Initialization

### Key Concept
Declare and assign at the same time.

### Example
```c
int number = 17;
char letter = 'H';
```

### Benefits
- Cleaner code
- Common programming practice
- Prevents uninitialized variables

---

# 14. Re-Declaring Variables

## Important Rule

### Correct
```c
int number = 17;
number = 25;
```

### Incorrect
```c
int number = 17;
int number = 25;
```

### Why?
- Re-declaring variables can cause:
  - compiler errors
  - unexpected behavior

---

# 15. Core Vocabulary

| Term | Meaning |
|---|---|
| Data Type | Defines what kind of data a variable stores |
| Variable | Named storage location in memory |
| Declaration | Creating a variable |
| Assignment | Giving a variable a value |
| Initialization | Declaring and assigning simultaneously |
| Qualifier | Modifies a data type |
| Precision | Accuracy of decimal storage |
| ASCII | Character-to-number encoding system |

---

# 16. Essential Syntax Examples

## Integer
```c
int x = 5;
```

## Character
```c
char grade = 'A';
```

## Float
```c
float temperature = 98.6;
```

## Double
```c
double pi = 3.1415926535;
```

## Boolean
```c
bool is_valid = true;
```

## String
```c
string name = "Jacob";
```

---

# 17. Study Checklist

## Understand:
- [ ] Difference between static and dynamic typing
- [ ] Why C requires type declarations
- [ ] Integer memory limits
- [ ] Difference between `float` and `double`
- [ ] ASCII basics
- [ ] Purpose of `void`
- [ ] Variable declaration vs assignment
- [ ] Variable initialization
- [ ] Purpose of `bool` and `string`

---

# 18. Practice Exercises

## Beginner
1. Create:
   - an integer
   - a float
   - a char
   - a bool
   - a string

2. Print their values using `printf`.

---

## Intermediate
1. Create a program that:
   - stores your age
   - stores your GPA
   - stores your first initial
   - stores whether you are a student

2. Print all variables.

---

## Advanced
1. Experiment with:
```c
float pi
```
vs
```c
double pi
```

2. Print many decimal places and compare precision.

---

# 19. Key Takeaways

- C requires explicit type declarations.
- Memory size affects data limits.
- `float` sacrifices precision for smaller memory usage.
- `double` improves decimal precision.
- `void` represents “nothing.”
- Variables must be declared before use.
- Initialization is preferred when possible.
- CS50 provides additional helpful types:
  - `bool`
  - `string`