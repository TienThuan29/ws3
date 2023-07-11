/*
Write a C program that will accept a positive integer then print out its factorial.
*/
#include <stdio.h>

int factorial (int n){
	if (n == 1)
		return 1;
	else 
		return n * factorial(n-1);
}

int main (){
	
	int n;
	char buffer;
	do {
		printf("enter n : ");
		scanf("%d", &n);
		scanf("%c", &buffer);
		if (buffer != '\n') printf("Re-enter\n");
		fflush(stdin);
	} while (buffer != '\n');
	printf("The factorial of %d is : %d\n", n , factorial(n));
	
	return n;
}
