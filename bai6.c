/*
Write a C program that will accept a positive integer then print out whether it is an element of the Fibonacci sequence or not.
*/
#include <stdio.h>
#include <stdbool.h>

bool eleFibo (int n){
	int s1 = 1;
	int s2 = 2;
	int s3 = 0;
	if (n == 1) return true;
	while (s3 < n){
		s3 = s1 + s2;
		s1 = s2;
		s2 = s3;
		if (n == s3) return true;
	}
	return false;
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
	if (eleFibo(n)){
		printf("%d is a element of fibonacci\n" , n);
	}
	else {
		printf("%d is NOT a element of fibonacci\n" , n);
	}
	
	return n;
}
