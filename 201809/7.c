/*
Write a C program to display multiple variables. Go to the editor
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux 
Declaration :
int a = 125, b = 12345; 
long ax = 1234567890; 
short s = 4043; 
float x = 2.13459; 
double dx = 1.1415927; 
char c = 'W'; 
unsigned long ux = 2541567890
*/

// Includes
#include <stdio.h>

// Variables
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;

int main(void)
{
	printf("a + c equals: %i.\n", a + c); // Integer format specifier
	
	printf("x + c equals: %f.\n", x + c); // Float format specifier
	
	printf("dx + x equals: %f.\n", dx + x); // Float format specifier
	
	printf("( (int) dx ) + ax equals: %ld.\n", ( (int) dx ) + ax); // Long int format specifier

	printf("a + x equals: %f.\n", a + x); // // Float format specifier
	
	printf("s + b equals: %i.\n", s + b); // Integer format specifier
	
	printf("ax + b equals: %ld.\n", ax + b); // Long int format specifier

	printf("s + c equals: %i.\n", s + c); // Integer format specifier

	printf("ax + c equals: %ld.\n", ax + c); // Long int format specifier

	printf("ax + ux equals: %lu.\n", ax + ux); // Long unsigned format specifier
}