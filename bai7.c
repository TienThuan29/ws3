/* 
Write a C program that will carry out some times. In each time, a nonnegative integer is accepted then print out the sum of its decimal digits. 
The program will terminate when its value of accepted number is negative.
*/
#include <stdio.h>
#include <stdbool.h>

int sum (){
	int n;
	int s = 0;
	printf("The program will terminate when its value of accepted number is negative.\n");
	do {
		scanf("%d", &n);
		if (n > 0) s += n;
	} while (n > 0);
	return s;
}

int main (){
	
	printf("Sum = %d", sum());
	
	return 0;
}
