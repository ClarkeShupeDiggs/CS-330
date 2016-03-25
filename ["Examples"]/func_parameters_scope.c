// Functions, Parameters, and Scope

#include <stdio.h>
#include <string.h>

#define rows 2
#define cols 3
int two_d_array[rows][cols] = {{1,2,3},
							   {4,5,6}};

void add(int,int);
void count(int);
void parameters(int,char[],float);
int multiply(int);
void display();
void second_string(char[]);

int main(void)
{
	// 1 - Function Syntax
	add(9,6);
	printf("\n");
	
	// 2 - Recursive Functions
	printf("Count to Five: ");
	count(1);
	printf("\n");
	
	// 3 - Parameters
	printf("\n");
	char example[] = "foo-bar";
	float k = 2.5;
	parameters(1,example,k);
	printf("\n");
	
	// 4 - Variable Scope (Loops)
	printf("\n");
	int x = 2;
	
	for(int i=0; i<3; i++){
		int x = 5;
		x--;
		if(i==2){
			printf("Value of x: %d", x);
		}
	}
	
	printf("\nValue of x: %d", x);
	printf("\n");
	
	// 5 - Variable Scope (Functions)
	int a = 3;
	
	printf("\na = %d", a);
	printf("\na * 2 = %d", multiply(a));
	
	// 6 - Global Variables
	printf("\n");							
	display();
	
	// 7 - Passing Parameters to Functions
	char s[] = "\nhello";
	
	second_string(s);
	printf("%s",s);
	printf("\n");
	
	// 8 - Variable Scope (Assignment)
	char string1[] = "cat";
	char string2[] = "dog";
	
	strcpy(string2,string1);
	string2[1] = 'u';
	
	printf("\n");
	printf("%s",string2);

	return 0;
}

// 1
void add(int one, int two){
	int result = one + two;
	printf("%d",result);
	printf("\n");
}

// 2 --> Adapted from: http://www.cprogramming.com/tutorial/c/lesson16.html
void count(int c){
	printf("%d",c);
	printf(" ");
	
	if(c<5){
		count(c+1);
	}
}

// 3
void parameters(int v, char w[], float p){
	printf("%d",v);
	printf(" %s",w);
	printf(" %1.1f",p);
}

// 4
int multiply(int b){
	int a = 6;
	return (a * 2);
}

// 6
void display(){
	printf("\n");
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d ", two_d_array[i][j]);
		}
		printf("\n");
	}
}

// 7
void second_string(char s[]){
	s = "\nworld";
}