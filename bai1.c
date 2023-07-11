// Write a C that will accept a positive integer n, n>=2 then print out primes between 2 and n.
#include <stdio.h>
#include <stdbool.h>

bool checkPrime (int x){
	int i;
	for (i = 2 ; i < x ; i++){
		if (x % i == 0) return false;
	}
	return true;
}

void printPrimes (int n){
	printf("Prime between 2 to %d\n", n);
	int i = 3;
	while (i < n){
		if (checkPrime(i)) printf("%d\n", i);
		i++;
	}
}
int main (){
	
	int n;
	printf("enter n : ");
	scanf("%d", &n);
	printPrimes(n);
	
	return 0;
}
