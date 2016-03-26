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
C supports the use of recursive functions, that is, functions that call themselves in order to complete repetitive tasks:
```c
void count(int c){
	printf("%d",c);
	printf(" ");
	
	if(c<5){			// Starting with some integer c that is less than 5,
		count(c+1);		// this function will increment c continually until
	}				// c is greater than or equal to 5
}
```

###Return Values
Functions written in C may only return one value at a time. The data type of this value must match the return type of its associated function declaration. 
##Parameters

###Multiple Parameters, Multiple Datatypes

##Scope

###Local

###Global

###Pass by Value (Default)

###Pass by Reference

###Variable Assignment

##Sources
http://www.tutorialspoint.com/cprogramming/index.htm
http://www.cprogramming.com/tutorial/c/lesson16.html
