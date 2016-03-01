# Control Flow

The order in which statements in a program execute can vary greatly. Most programs are not organized to run in a strictly linear fashion--instead, statements are often grouped into blocks of code, each of which will be evaluated depending on its initial condition. Statements and code blocks such as these are said to alter the flow of program control. 

## Conditional Statements

Perhaps the simplest type of control statement supported by C is the family of if, if-else, and else-if statements (more commonly known as conditional statements). If-statements alter the flow of program control by evaluating a condition before executing any code between their associate braces. If the condition is true, the code between the braces will be executed. If the condition is false, the next statement (if, else-if, else, or any other kind) beyond the scope of its braces will be considered for execution. 

An example of the if-else statement:

```c
int x = 10;
if(x%2 == 0) 							// 10 modulo 2 is 0, thus the condition is true
	printf(" is an even number.\n");	// Output: "10 is an even number."	
}else{
	printf(" is not even.\n");
}
```

## Short-Circuit Evaluation

There need not be strictly one condition evaluated at one time. C supports short-circuit logic, in which the statement preceding a control operator (&&, ||, and ?) is evaluated to be true or false before, and optionally in addition to, the statement to the right of the operator. An example of the multi-condition if-statement:

```c
int x = 10;
if(x%2==1 && (x*6)%5==0){
	printf(" is not even, but it IS divisible by 5.\n");
}else if(x!=4){								// The first condition is false, but 10 != 4 is true
	printf(" does not equal 4.\n");			// Output: "10 does not equal 4."
}else{
	printf(" is a integer.\n");
}
```

## The Dangling -else

In order to avoid dangling else-statements--else statements that are ambiguously defined--C automatically associates an else statement with its nearest if-statement prior to evaluation. 

## Loops

C supports while, do-while, and for-loops in order to quickly execute repetitive tasks.

### The while Loop

While loops function by evaluating a condition before executing a block of code. If the condition is true, one cycle of the loop will execute before testing the condition once more. If the condition is false, the loop terminates execution.

An example of the while-loop:

```c
int y = 3;
char string1[] = "How much wood could a woodchuck chuck\n";
char string2[] = "if a woodchuck could chuck wood?\n";

while(y>1){						// First time around the loop: y = 3, so y>1 is true
	printf(string1,"\n");		// Second time around the loop: y = 2, so y>1 is true
	printf(string2,"\n");		// Third time around the loop: y = 1, so y>1 is false
	y--;						// Output: string1 and string2 will be printed twice
}
```

### The do-while Loop

The do-while loop differs from the while loop in that it will execute its code block at least once before evaluating its condition. If the condition is true, the loop will continue to execute. If the condition is false, the loop will terminate.

An example of the do-while loop:

```c
int z = 0;
do{
	printf("A long time ago...\n");				// This code is executed at least once
}while(z>0);									// before the loop's condition is evaluated
	printf("in a galaxy far, far away...\n");	// Output: "Once upon a time ago...
												//	    in a galaxy far, far away..."
```

### The for Loop

For loops differ from while and do-while loops in that they have a built-in exit-variable. The loop condition, evaluated at the beginning of every loop, is composed of three parts: the exit-variable initialization, the exit-variable condition, and the exit-variable update statement.

An example of the for-loop:

```c
for(int i=0; i<5; i++){		// i is incremented and its condition tested every time the loop executes
	int add = x + y + z;
	printf("%d ",add);		// Output: 11 29 32 35 38
	x++;
	y = x - 3;
	z = 2 + y;
}
```

## Switch Statements

```c
int input = 5;
switch (input){
	case 1:
		printf("One!\n");
		break;
	case 2:
		printf("Two!\n");
		break;
	case 3:
		printf("Three!\n");
		break;
	case 4:
		printf("Four!\n");
		break;
	case 5:						// input = 5
		printf("Five!\n");		// Output: "Five!"	 
		break;		
}
```

## Continue and Break Statements

```c
for(int i=1; i<6; i++){
	printf("%d", i);
	if(i>=5){			// When i = 5, the program will disregard the second print statement
		continue;		// and execute the statement(s) above the continue statement once more 
	}
	printf(", ");		// Output: 1, 2, 3, 4, 5
}
```

## Sources

http://www.cprogramming.com/tutorial/c-tutorial.html. Accessed February 29, 2016.
