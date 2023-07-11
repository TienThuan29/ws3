/*
Write a C program that will print out the value at the nth position in Fibonacci sequence.
*/
#include <stdio.h>

int fiboN (int n){
	int pos = 2;
	int s1 = 1;
	int s2 = 1;
	int s3;
	if (n == 1 || n == 2) return 1;
	while (pos < n){
		s3 = s1 + s2;
		s1 = s2;
		s2 = s3;
		pos++;
	}
	return s3;
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
	printf("the fibonacii of %d position is : %d\n", n , fiboN(n));
	
	return n;
}
