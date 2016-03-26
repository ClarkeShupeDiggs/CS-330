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

###Multiple Parameters, Multiple Data Types
Though C functions can only return a single value, they may accept multiple parameters of variable type as input. 
```c
void parameters(int v, char w[], float p){		// This function accepts 3 parameters:
	printf("%d",v);					// an integer
	printf(" %s",w);				// an array of characters
	printf(" %1.1f",p);				// and a floating-point number
}
```

##Scope

###Local
Variables that are declared within a block of code are known as local variables. Local variables can be accessed and manipulated only by statements located within the same code block (or function). For example, a variable x that is declared and initialized in main() will not be visible within a for-loop that makes use of a variable of the same name:
```c
printf("\n");
int x = 2;							// main()'s x is an integer of the value 2
	
for(int i=0; i<3; i++){
	int x = 5;						// for()'s x is an integer of the value 5
	x--;							// for()'s x is 4
	if(i==2){
		printf("Value of x: %d", x);			// Output: Value of x: 4
	}
}
								// main()'s x still holds the value 2
printf("\nValue of x: %d", x);					// Output: Value of x: 2
printf("\n");
```
In a similar vein, a variable a that is declared and initialized in main() will not be visible within a function that declares and initializes a variable of the same name:
```c
int multiply(int b){
	int a = 6;					// multiply()'s a is an integer of value 6
	return (a * 2);	
}

int main(void){
	int a = 3;					// main()'s a is an integer of value 3 (so, a * 2 = 6)
	printf("\na = %d", a);				// Output: a = 3
	printf("\na * 2 = %d", multiply(a));		// Output: a * 2 = 12
}
```
The previous examples illustrate the fact that local variables x and a are declared and initialized in two separate instances (x = 2 and a = 3 in main(), x = 5 in the for-loop and a = 6 in multiply()). Therefore, variables x and a in main() are references to values stores in separate spaces in memory than variables x and a in the for-loop and in multiply().
###Global

###Pass by Value (Default)

###Pass by Reference

###Variable Assignment

##Sources
http://www.tutorialspoint.com/cprogramming/index.htm

http://www.cprogramming.com/tutorial/c/lesson16.html
