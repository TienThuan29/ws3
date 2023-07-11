/*
Write a C program that will accept a point and a circle having the center is (0,0) 
then print out the relative position of this point with the circle.
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool getRelPos (double x, double y, double r){
	double dp = pow(x,2.0) + pow(y,2.0);
	double dr = pow(r,2.0);
	if (dp > dr) return false;
	return true;
}

int main (){
	
	double x , y , r;
	do {
		printf ("enter R : ");
		scanf("%lf", &r);
		if (r < 0) printf("Re-enter!\n");
	} while (r < 0);
	printf("Enter X : ");
	scanf ("%lf", &x);
	printf("Enter Y : ");
	scanf ("%lf", &y);
	if (getRelPos(x,y,r)){
		printf("the point is on the circle\n");
	}
	else {
		printf("the point is out the circle\n");
	}
	
	return 0;
}






