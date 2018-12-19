/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year. 

Test Data :
Number of days : 1329 
Expected Output :
Years: 3 
Weeks: 33 
Days: 3 
*/

// Includes
#include <stdio.h>

// Varibles
int days, result;

int main(void)
{
	printf("Number of days:\n");
	result = scanf("%d", &days);
	printf("Your input was %i.\n", result);
}