#Functions, Parameters, & Scope

##Functions

###Syntax

Functions in C are comprised of a function declaration (establishing the return type, name, and parameters of a function) followed by its definition (containing the function's body of code).

```c
void add(int one, int two){       // <return type: void> <name: add>(parameters: int one, int two) <-- declaration
	int result = one + two;       // body
	printf("%d",result);          // body     <-- definition
	printf("\n");                 // body 
}
```

###Placement

A C file that contains main() can implement one or more separate functions in two ways:

```c
// Method 1 - Declare the function before main(), define the function after main()

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
	}					// c is greater than or equal to 5
}
```

###Return Values
Functions written in C may only return one value at a time. The data type of this value must match the return type of its associated function declaration. 
##Parameters

###Multiple Parameters, Multiple Data Types
Though C functions can only return a single value, they may accept multiple parameters of variable type as input. 
```c
void parameters(int v, char w[], float p){		// This function accepts 3 parameters:
	printf("%d",v);									// an integer,
	printf(" %s",w);								// an array of characters,
	printf(" %1.1f",p);								// and a floating-point number
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
	printf("\na = %d", a);						// Output: a = 3
	printf("\na * 2 = %d", multiply(a));		// Output: a * 2 = 12
}
```
The previous examples illustrate the fact that local variables x and a are declared and initialized in two separate instances (x = 2 and a = 3 in main(), x = 5 in the for-loop and a = 6 in multiply()). Therefore, variables x and a in main() are references to values stores in separate spaces in memory than variables x and a in the for-loop and in multiply().

###Global
Variables that are declared outside of main() are known as global variables. Global variables are visible to every function in a C program, including main(). For example, in the following code the for-loop that is used by the display() function to print the values of a two-dimensional array could just as easily be placed in main(), and result in the same output:
```c
#define rows 2
#define cols 3
int two_d_array[rows][cols] = {{1,2,3},{4,5,6}};

void display(){
	printf("\n");
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d ", two_d_array[i][j]);
		}
		printf("\n");
	}
}

int main(void){			// Output: 1 2 3
	display();			//		   4 5 6
}

```
NOTE: In a C program, local variables of the same name as global variables will take precendence in the block of code in which they are used. 
###Pass-by-Value
As mentioned previously, the result of manipulating a variable's value within a function in a C program will depend on both the variable's scope and that of the function. However, when passing one or more arguments to a function, C allows the programmers to pass these arguments by value or by reference. By defualt, C programs pass arguments to functions by value: the values of the arguments are copied and then sent to the function; any changes to the arguments within the body of the function will not alter their orginal values (outside of the function in question). For example:
```c
void second_string(char s[]){
	s = "\nworld";				// second_string()'s copy of s has the value "world"
}								// main()'s copy of s has the value "hello"
 
int main(void) {
	char s[] = "\nhello";
	second_string(s);			// the value of s is copied and sent to second_string()
	printf("%s",s);				// Output: hello
}
```
###Pass-by-Reference
Despite this default setting, C programmers can just as easily modify their code to pass arguments by reference: the memory addresses of arguments (for example: int x, int y, and int z) are copied and sent then sent to the function (with the following parameter-list syntax: int *x, int *y, int *z); any changes to the arguments within the body of the function will directly alter the values of the variables in memory. 

###Variable Assignment
C 
Variables in C programs, much like C functions, are (by default) assigned by value. For example, in the following code the variable a is initialized with one value, and then re-assigned with the value of a second variable b:
```c
int a = 2;			// integer a contains the value 2
int b = 5;
a = b;				// integer a now contains the value 5
printf("%d",a);		// Output: 5
```
Another example of assign-by-value in C is as follows:
```c
#include <string.h>
 
int main(void) {
	char string1[] = "cat";
	char string2[] = "dog";			// string2[1] contains the value 'o'
	// NOTE: the library function strcpy() is pass-by-reference
	strcpy(string2,string1);		// string2[1] now contains the value 'a'
	string2[1] = 'u';			// string2[1] now contains the value 'u'

	printf("%s",string2);			// Output: cut
}
```

##Sources
http://www.tutorialspoint.com/cprogramming/index.htm

http://www.cprogramming.com/tutorial/c/lesson16.html
