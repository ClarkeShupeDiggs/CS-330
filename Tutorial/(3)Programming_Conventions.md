# Programming Conventions

## Naming Conventions

### Identifiers

Variables, also known as identifiers, are essential components of every C program. The storage and manipulation of data requires that every variable name or identifying label conform to the follwing standards:

1. Both upper and lowercase letters in the standard alphabet [ a-z and A-Z ] may be used. Variable names are case sensitive.
2. The underscore character ( _ ) and digits [ 0-9 ] may be used; however, the first character of a variable name must be a letter or an underscore.
3. None of the following reserved words can be used by the programmer to identify a variable: 
  * auto, enum, restrict, unsigned, break, extern, return, void, case, float, short, volatile, char, for, signed, while,         const, goto, sizeof, _Bool, continue, if, static, _Complex, default, inline, struct, _Imaginary, do, int, switch,            double, long, typedef, else, register, union

In order for any C program to compile successfully, every one of its variables must adhere to these basic conventions.

### Symbols

A symbol is comprised of one or more punctuation characters. Important syntax symbols include:
* **( )** parentheses - enclosing conditional statements, loop conditions, and function parameters, 
* **{ }** braces - enclosing code blocks, and 
* **;** semicolons - marking the end of statements and expressions.

## Data Types

A complete variable declaration is comprised of, at the very least, a syntactically correct identifer preceded by its data type. Basic data types include numeric integers (denoted as int, char, short, or long) and floating-point numbers (dentoted as float, double, or long double). In addition to enumerated and void types, there are also derived data types (pointer, array, structure, union, and function types).

Examples of valid variable declarations and their associated data types: 

```c
  int num = 5;
  float dec = 8.9;
  bool BOOLEAN = true;          /* Note: in order to store boolean values, the following line of code 
                                   must be placed near the top (outside main()) of the program: 
                                   #include <stdbool.h> 
                                */
  int matrix[] = {1,2,3,4,5};
  char word[] = "Hello World";  // Note: strings in C programs are stored as arrays of characters
```

### Type Conversions

C is a statically and weakly typed language. This means that any variable can be cast, or converted, between two data types of the same size. In a similar vein, C supports both implicit and explicit type conversions. 

Examples of widening and narrowing type conversions:

```c
  int a = 1;
  float b = 2.5;    /* Storing the value of a + b will result in an implicit widening conversion 
	                   (a + b = 3.5)
	                */
  int c = a + b;    /* Storing the value of a + b in the integer c will result in an explicit 
	                   narrowing conversion (a + b = 3) 
	                */
```
### Limitations

Further restrictions of C programming involving arrays, dictionaries, boolean values, and string concatenation remain. First, arrays cannot store values of multiple types in C programs. Dictionaries and hash types are not a part of the standard C library, and must therefore be implemented via a non-standard library or supplemented by the programmer. Boolean types (true or false) may be used in any C program that includes the following line of code (as noted above): #include <stdbool.h>. Last but not least, strings, as represented by arrays of characters, cannot be concatenated using the ( + ) arithmetic operator. Instead, the function strcat may be used or any other function specially supplied by the programmer.  

## Sources

http://www.codingunit.com/c-tutorial-variables-and-constants

http://stackoverflow.com/questions/1608318/is-bool-a-native-c-type/1608350#1608350

http://www.tutorialspoint.com/cprogramming/index.htm


