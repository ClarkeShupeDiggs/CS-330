# Control Flow

The order in which statements in a program execute can vary greatly. Most programs are not organized to run in a strictly linear fashion--instead, statements are often grouped into blocks of code, each of which will be evaluated depending on its initial condition. Statements and code blocks such as these are said to alter the flow of program control. 

## Conditional Statements

Perhaps the simplest type of control statement supported by C is the family of if, if-else, and if-else if-else statements.

An example of the if-else statement:

```c
int x = 10;
if(x%2 == 0) 					// The remainder of 10 modulo 2 is 0, thus the condition is true	
	printf(" is an even number.\n");	// Output: "10 is an even number."	
}else{
	printf(" is not even.\n");
}
```
An example of the else-if statement:

```c
if(x%2==1 && (x*6)%5==0){
	printf(" is not even, but it IS divisible by 5.\n");
}else if(x!=4){							// The first condition is false, but 10 != 4 is true
	printf(" does not equal 4.\n");				// Output: "10 does not equal 4."
}else{
	printf(" is a integer.\n");
}
````

## Short-Circuit Evaluation

## Loops

C supports while, do-while, and for-loops in order to quickly complete repetitive tasks.

### The while Loop

```c
int y = 3;
char string1[] = "How much wood could a woodchuck chuck\n";
char string2[] = "if a woodchuck could chuck wood?\n";

while(y>1){				// First time around the loop: y = 3, so y>1 is true
	printf(string1,"\n");		// Second time around the loop: y = 2, so y>1 is true
	printf(string2,"\n");		// Third time around the loop: y = 1, so y>1 is false
	y--;				// Output: string1 and string2 will be printed twice
}
```

### The do-while Loop

```c
int z = 0;
do{
	printf("A long time ago...\n");			// This code is executed at least once
}while(z>0);						// before the loop's condition is evaluated
	printf("in a galaxy far, far away...\n");	// Output: "Once upon a time ago...
								    in a galaxy far, far away..."
```

### The for Loop

```c
for(int i=0; i<5; i++){			// i is incremented and evaluated every time the loop executes
	int add = x + y + z;
	printf("%d ",add);		// Output: 11 29 32 35 38
	x++;
	y = x - 3;
	z = 2 + y;
}
```

## Switch Statements


```c
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
	case 5:
		printf("Five!\n");
		break;		
}
```

## Continue and Break Statements


## Sources

http://www.cprogramming.com/tutorial/c-tutorial.html. Accessed February 29, 2016.
