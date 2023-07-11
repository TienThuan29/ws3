/*
Write a C program that will accept a non-negative integer then print out its minimum and maximum digits.
*/
#include <stdio.h>
#include <limits.h>

void minMaxDigit (long num){
	long temp = num;
	int min = 10;
	int max = 0;
	while (temp > 0){
		int digit = temp % 10;
		printf("%d\n",digit);
		if (digit > max) 
			max = digit;
		if (digit < min)
			min = digit;
		temp /= 10;
	}
	printf("Max digit : %d\n", max);
	printf("Min digit : %d", min);
}

int main (){
	long n;
	do {
		printf("enter n : ");
		scanf("%d" , &n);
		if (n < 0) {
			printf("re-enter\n");
		}
	} while (n < 0);
	minMaxDigit(n);
	return 0;
}


