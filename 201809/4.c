/*
Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L' 
Expected Output: 
The reverse of XML is LMX
*/

// Includes
#include <stdio.h>
#include <strings.h>

// Variables
char first[] = "X";
char second[] = "M";
char third[] = "L";

int main(void)
{
	printf("The reverse of %s%s%s is %s%s%s.\n", first, second, third, third, second, first);
}
	