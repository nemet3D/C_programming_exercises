/*
Write a C program to print your name, date of birth. and mobile number. Go to the editor
Expected Output:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999
*/

// Includes
#include <stdio.h>
#include <string.h>

// Variables
char name[] = "Octavian-Valentin Nemet";
char DOB[] = "01 January, 1950";
char Mobile[] = "0777.777.777";

int main(void)
{
	printf("Name   : %s\n", name);
	printf("DOB    : %s\n", DOB);
	printf("Mobile : %s\n", Mobile);
}