// Data Types and Naming Conventions

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// Numeric integer
    	int num = 5;
	// Numeric decimal
	float dec = 8.9;
	// Boolean value
	bool BOOLEAN = true;
	// An array of integers
	int matrix[] = {1,2,3,4,5};
	// Strings are arrays of characters
	char word[] = "Hello World";
	
	// Display formatted integer
	printf("Integer: %d\n", num);
	// Display formatted decimal
	printf("Decimal: %1.1f\n", dec);
	// Display 
	if(BOOLEAN){
		printf("Boolean: true\n");
	}else{
		printf("Boolean: false\n");
	}
	
	// Display the items in the array
	printf("Integer Array: [ ");
	for (int i=0; i < 4; i++ ){
		printf("%d ", matrix[i]);
	}
	printf("]");
	
	// Display string
	printf("\nString: %s\n", word);
	
	/* Type Conversions */
	
	int a = 1;
	float b = 2.5;
	printf("\na = 1\nb = 2.5");
	printf("\nWidening Conversion (Default):\ta + b = %1.1f\n", a + b);
	
	int c = a + b;
	printf("Narrowing Conversion:\t\ta + b = %d\n", c);
	
	
	// Revising the arithmetic expression: x = "5" + 6
	int x = 5 + 6;
	printf("\nx = %d",x);
	
	/* Alternately, this statement can be represented by a string
	char x[] = "5 + 6";
	printf(x);
	*/
	
	return 0;
	
}
