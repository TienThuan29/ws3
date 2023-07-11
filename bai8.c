/*
Write a C program that will accept the integral part and fraction of a real number then print out the this real number.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double realNumber (double inte, double frac, int count){
	return (double)inte + frac*pow(10.0 , -count);
}

int main (){
	
	double integral;
	double fraction;
	char ch[30];
	int count = 0;
	printf("enter integral : ");
	scanf("%lf", &integral);
	getchar();
	printf("enter fraction : ");
	do {
		scanf("%s", &ch);
		if (ch[0] == '-') {
			printf("Re-enter!\n");
		}
	} while (ch[0] == '-');
	count = strlen(ch);
	fraction = atoi(ch);
	//printf("%d\n", count);
	//printf("%d\n", fraction);
	printf("The real number : %.10lf\n", realNumber(integral, fraction , count));
	
	
	return 0;
}
