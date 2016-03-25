#Functions, Parameters, & Scope

##Functions

###Syntax

Functions in C are comprised of a function declaration (establishing the return type, name, and parameters of a function)   followed by its definition (containing the function's body of code).

```c
void add(int one, int two){     // <return type: void> <name: add>(parameters: int one, int two) <-- declaration
	int result = one + two;       // body
	printf("%d",result);          // body     <-- definition
	printf("\n");                 // body 
}
```

###Placement

A C file that contains main() can implement one or more separate functions in two ways:

```c
// Method 1 - Declare the function before main(), Define the function after main()

void add(int,int);

int main(void){ ... }

void add(int one, int two){
	int result = one + two;
	printf("%d",result);
	printf("\n");
}
```
The first method involves making a forward declaration in a C file, informing the compiler that a particular function exists, but it is defined elsewhere.

```c
// Method 2 - Declare and define the function before main()
void add(int one, int two){
	int result = one + two;
	printf("%d",result);
	printf("\n");
}

int main(void){ ... }
```
The second method involves both declaring and defining the function before the program reaches main(). 

In order to implement functions declared in an external file, you must invoke the #include delimeter along with the name of the external header file:

```c
// foo.h

void add(int,int);
```
```c
// foo.c

#include "foo.h"

void add(int one, int two){
	int result = one + two;
	printf("%d",result);
	printf("\n");
}

```

###Recursion

###Return Values

##Parameters

###Multiple Parameters, Multiple Datatypes

##Scope

###Local

###Global

###Pass by Value (Default)

###Pass by Reference

###Variable Assignment

###Sources
