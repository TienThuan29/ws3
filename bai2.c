// Write a C program that will accept data of a day then print out whether they are valid or not. 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool checkLeapYear (int year) {
	if (year % 4 != 0)
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 == 0)
		return true;
	else 
		return false;
}

bool checkValid (int day, int month , int year){
	if (month < 1 || month >12) return false;
	if (year > 1){
		if (checkLeapYear(year) && month == 2){ // nam nhuan
			if (day < 1 || day > 29) return false;
		}
		else if ((!checkLeapYear(year)) && (month == 2)){ // nam khong nhuan
			if (day < 1 || day > 28) return false;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if (day < 1 || day > 31) return false;
		}
		else {
			if (day < 1 || day > 30) return false;
		}
	}
	else 
		return false;
	return true;
}

int main (){
	
	int day , month , year;
	char buffer;
	do {
		printf("enter day : ");
		scanf("%d", &day);
		scanf("%c", &buffer);
		if (buffer != '\n') printf("Not valid day! Re-enter\n");
		fflush(stdin);
	} while (buffer != '\n');
	do {
		printf("enter month : ");
		scanf("%d", &month);
		scanf("%c", &buffer);
		if (buffer != '\n') printf("Not valid month! Re-enter\n");
		fflush(stdin);
	} while (buffer != '\n');
	do {
		printf("enter year : ");
		scanf("%d", &year);
		scanf("%c", &buffer);
		if (buffer != '\n') printf("Not valid year! Re-enter\n");
		fflush(stdin);
	} while (buffer != '\n');
	
	if (checkValid(day,month,year)) {
		printf("valid day!\n");
	}
	else {
		printf("not valid day!\n");
	}
	
	return 0;
}
