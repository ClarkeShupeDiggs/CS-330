// Control Flow

#include <stdio.h>

int main(void){
	int x = 10;
	
	// Single-Condition if-else
	printf("%d", x);
	
	if(x%2 == 0){
		printf(" is an even number.\n");
	}else{
		printf(" is not even.\n");
	}
	
	// Multi-Condition if-else if-else
	printf("%d", x);
	
	if(x%2==1 && (x*6)%5==0){
		printf(" is not even, but it IS divisible by 5.\n");
	}else if(x!=4){
		printf(" does not equal 4.\n");
	}else{
		printf(" is a integer.\n");
	}
	printf("\n");
	
	/* Loops */
		int y = 3, z = 0;
		char string1[] = "How much wood could a woodchuck chuck\n";
		char string2[] = "if a woodchuck could chuck wood?\n";
		
		// while loop
		while(y>1){
			printf(string1,"\n");
			printf(string2,"\n");
			y--;
		}
		printf("\n");
		
		// do-while loop
		do{
			printf("A long time ago...\n");
		}while(z>0);
		printf("in a galaxy far, far away...");
		printf("\n\n");
		
		// for loop
		for(int i=0; i<5; i++){
			int add = x + y + z;
			printf("%d ",add);
			x++;
			y = x - 3;
			z = 2 + y;
		}
		printf("\n\n");
	
	/* End of Loops */
	
	// switch & break statements
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
		case 5:
			printf("Five!\n");
			break;		
	}	
	printf("\n");
	
	// continue statements 
	for(int i=1; i<6; i++){
		printf("%d", i);
		if(i>=5){
			continue;
		}
		printf(", ");
	}
	
	return 0;
}