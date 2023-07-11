/*
Write a C program that will accept two positive integers then print out their greatest common divisor and least common multiple.
*/
#include <stdio.h>

int gcd (int a, int b){
	while (a != b){
		if (a > b){
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int lcm (int a , int b){
	return (a*b) / gcd(a,b);
}

int main (){
	int a , b;
	printf("enter a : ");
	do {
		scanf ("%d",&a);
		if ( a < 0)
			printf("Re-enter!\n");
	} while (a < 0);
	printf("enter b : ");
	do {
		scanf ("%d",&b);
		if ( b < 0)
			printf("Re-enter!\n");
	} while (b < 0);
	printf("greatest common divisor : %d\n", gcd(a,b));
	printf(" least common multiple : %d\n", lcm(a,b));
	
	return 0;
}
